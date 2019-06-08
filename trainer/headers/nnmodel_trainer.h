#include <string>
#include <vector>
#include "dataset_provider.h"
#include "../../../OpenNN/opennn/tinyxml2.h"
#include "../../../OpenNN/opennn/perceptron_layer.h"
#include "../../../OpenNN/opennn/neural_network.h"
#include "../../../OpenNN/opennn/training_strategy.h"

/**
 * Neural network trainer interface
 */
class INNModelTrainer {
public:
    /**
     * Start training model on DataSetProvider data.
     * @return logically serialized model in PMML format
     */
    virtual tinyxml2::XMLDocument* Train() = 0;

    virtual const OpenNN::PerceptronLayer::ActivationFunction getActivationFunction() const = 0;

    virtual const size_t getNumberOfFullyConnectedLayers() const = 0;

    virtual const size_t getNumberOfEpochs() const = 0;

    virtual const shared_ptr<TDataSetProvider> &getDataSetProvider() const = 0;
};

class TNNModelTrainer : INNModelTrainer {
private:
    const OpenNN::PerceptronLayer::ActivationFunction ActivationFunction;
    const size_t NumberOfFullyConnectedLayers;
    const size_t NumberOfEpochs;

    const std::shared_ptr<TDataSetProvider> DataSetProvider;
public:

    TNNModelTrainer(const OpenNN::PerceptronLayer::ActivationFunction& ActivationFunction,
                    const size_t& NumberOfFullyConnectedLayers,
                    const size_t& NumberOfEpochs,
                    const shared_ptr<TDataSetProvider>& DataSetProvider);

    tinyxml2::XMLDocument *Train() override;

    const OpenNN::PerceptronLayer::ActivationFunction getActivationFunction() const override;

    const size_t getNumberOfFullyConnectedLayers() const override;

    const size_t getNumberOfEpochs() const override;

    const shared_ptr<TDataSetProvider> &getDataSetProvider() const override;
};
