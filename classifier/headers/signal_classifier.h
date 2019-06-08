#include "../../../OpenNN/opennn/matrix.h"
#include "../../../OpenNN/opennn/neural_network.h"


class INNClassifier {
public:
    virtual OpenNN::Matrix<double> classify(const OpenNN::Matrix<double>& signal) = 0;
};

class BinaryNNClassifier : public INNClassifier {
private:
    const OpenNN::NeuralNetwork nn;
public:
    explicit BinaryNNClassifier(const OpenNN::NeuralNetwork &nn);

    OpenNN::Matrix<double> classify(const OpenNN::Matrix<double> &signal) override;
};
