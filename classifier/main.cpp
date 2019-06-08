#include "headers/signal_classifier.h"
#include "headers/static_model.h"
#include "headers/nn_provider.h"
#include "../../libiec61850/.install/include/iec61850_server.h"
#include "../../libiec61850/.install/include/hal_thread.h"

#include <signal.h>
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>

#define TCP_PORT 34337
#define NN_MODEL_DIRECTORY "/tmp/signal_classifier/trainer_model.ppml"
#define INPUT_SIZE 8192

static int running = 0;

static void SigintHandler(int signalId) {
    running = 0;
}

static OpenNN::Matrix<double> ConvertMmsMessageToMatrix(MmsValue* mmsValue) {
    OpenNN::Matrix<double> res;
    res.set(1, INPUT_SIZE);
    for (int i = 0; i < INPUT_SIZE; ++i) {
        const double elem = MmsValue_toDouble(MmsValue_getElement(mmsValue, i));
        res[i] = elem;
    }
    return res;
}


int main() {
    IedServer iedServer = IedServer_create(&iedModel);

    IedServer_start(iedServer, TCP_PORT);

    DataObject* mhai1_ha_phsAHar = (DataObject*)
            IedModel_getModelNodeByObjectReference(&iedModel, "testComplexArray/MHAI1.HA.phsAHar");
    MmsValue* mhai1_ha_phsAHar_mx = IedServer_getFunctionalConstrainedData(iedServer, mhai1_ha_phsAHar, IEC61850_FC_MX);

    if (!IedServer_isRunning(iedServer)) {
        std::cerr << "Starting server failed! Exit." << std::endl;
        IedServer_destroy(iedServer);
        return -1;
    }
    running = 1;

    signal(SIGINT, SigintHandler);

    TNeuralNetworkProvider nnProvider(NN_MODEL_DIRECTORY);

    const auto& nn = nnProvider.GetNNModel();
    BinaryNNClassifier nnClassifier(nn);

    while (running) {
        IedServer_lockDataModel(iedServer);
        const auto signal = ConvertMmsMessageToMatrix(mhai1_ha_phsAHar_mx);
        const auto res = nnClassifier.classify(signal);

        // Depends on res send managing signal to relay or not

        IedServer_unlockDataModel(iedServer);
    }

    /* stop MMS server - close TCP server socket and all client sockets */
    IedServer_stop(iedServer);

    /* Cleanup - free all resources */
    IedServer_destroy(iedServer);

    return 0;
}
