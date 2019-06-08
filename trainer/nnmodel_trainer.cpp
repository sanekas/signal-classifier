#include "headers/nnmodel_trainer.h"
#include "../../OpenNN/opennn/probabilistic_layer.h"
#include "../../OpenNN/opennn/training_strategy.h"
#include "../../OpenNN/opennn/neural_network.h"

#define INPUTE_SIZE 1 << 13
#define NUMBER_OF_NEURONS 1 << 6

TNNModelTrainer::TNNModelTrainer(const OpenNN::PerceptronLayer::ActivationFunction& ActivationFunction,
                const size_t& NumberOfFullyConnectedLayers,
                const size_t& NumberOfEpochs,
                const shared_ptr<TDataSetProvider>& DataSetProvider):
                ActivationFunction(ActivationFunction),
                NumberOfFullyConnectedLayers(NumberOfFullyConnectedLayers),
                NumberOfEpochs(NumberOfEpochs),
                DataSetProvider(DataSetProvider) {}


tinyxml2::XMLDocument *TNNModelTrainer::Train() {
    if (!(DataSetProvider->HasNext())) {
        throw out_of_range("No available datasets");
    }
    OpenNN::NeuralNetwork nn(INPUTE_SIZE, NUMBER_OF_NEURONS, 1);

    const auto layers = nn.get_multilayer_perceptron_pointer();
    const auto layersNumber = layers->get_layers_number();

    for (size_t i = 0; i < layersNumber; ++i) {
        layers->get_layer_pointer(i)->set_activation_function(ActivationFunction);
    }

    while (DataSetProvider->HasNext()) {
        OpenNN::DataSet ds = DataSetProvider->Next();
        nn.get_inputs_pointer()->set_information(ds.get_variables().get_inputs_information());
        nn.get_outputs_pointer()->set_information(ds.get_variables().get_targets_information());

        nn.construct_scaling_layer();

        nn.construct_probabilistic_layer();
        OpenNN::ProbabilisticLayer* probabilistic_layer_pointer = nn.get_probabilistic_layer_pointer();
        probabilistic_layer_pointer->set_probabilistic_method(OpenNN::ProbabilisticLayer::Binary);

        OpenNN::TrainingStrategy training_strategy(&nn, &ds);
        training_strategy.set_loss_method(OpenNN::TrainingStrategy::LossMethod::MEAN_SQUARED_ERROR);
        training_strategy.set_training_method(OpenNN::TrainingStrategy::GRADIENT_DESCENT);

        OpenNN::ConjugateGradient* gradientDescent = training_strategy.get_conjugate_gradient_pointer();
        gradientDescent->set_maximum_epochs_number(NumberOfEpochs);

        gradientDescent->perform_training();
    }

    return nn.to_PMML();
}

const OpenNN::PerceptronLayer::ActivationFunction TNNModelTrainer::getActivationFunction() const {
    return ActivationFunction;
}

const size_t TNNModelTrainer::getNumberOfFullyConnectedLayers() const {
    return NumberOfFullyConnectedLayers;
}

const size_t TNNModelTrainer::getNumberOfEpochs() const {
    return NumberOfEpochs;
}

const shared_ptr<TDataSetProvider> &TNNModelTrainer::getDataSetProvider() const {
    return DataSetProvider;
}

