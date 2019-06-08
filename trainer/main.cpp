#include "headers/dataset_loader.h"
#include "headers/nnmodel_trainer.h"

#define DATASETS_DIR "/tmp/signal_classifier/datasets"
#define TRAINED_MODEL_DIR "/tmp/signal_classifier/trainer_model.ppml"

int main() {
    const auto& loader = std::make_shared<TDataSetLoader>(DATASETS_DIR);
    const auto& datasets = loader->GetDataSetsFileNames();
    const auto& dataSetProvider = std::make_shared<TDataSetProvider>(datasets);
    TNNModelTrainer trainer(OpenNN::PerceptronLayer::ActivationFunction::RectifiedLinear, 3, 25, dataSetProvider);
    const auto res = trainer.Train();
    res->SaveFile(TRAINED_MODEL_DIR);
    return 0;
}