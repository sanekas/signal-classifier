#include "../../../OpenNN/opennn/neural_network.h"

class INeuralNetworkProvider {
public:
    virtual OpenNN::NeuralNetwork GetNNModel() const = 0;
    virtual const std::string GetNNPmlSource() const = 0;
};

class TNeuralNetworkProvider : public INeuralNetworkProvider {
private:
    const std::string NNPPmlSource;
public:
    TNeuralNetworkProvider(const string &NNPPmlSource);

    OpenNN::NeuralNetwork GetNNModel() const override;

    const string GetNNPmlSource() const override;
};
