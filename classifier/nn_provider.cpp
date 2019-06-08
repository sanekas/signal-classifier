#include "../../OpenNN/opennn/neural_network.h"
#include "headers/nn_provider.h"

OpenNN::NeuralNetwork TNeuralNetworkProvider::GetNNModel() const {
    tinyxml2::XMLDocument serializedModel;
    const auto loadStatus = serializedModel.LoadFile(NNPPmlSource.data());
    if (loadStatus != tinyxml2::XMLError::XML_SUCCESS) {
        throw runtime_error("Invalid neural network model!");
    }
    OpenNN::NeuralNetwork nn;
    nn.from_XML(serializedModel);
    return nn;
}

const string TNeuralNetworkProvider::GetNNPmlSource() const {
    return NNPPmlSource;
}

TNeuralNetworkProvider::TNeuralNetworkProvider(const string &NNPPmlSource) : NNPPmlSource(NNPPmlSource) {}
