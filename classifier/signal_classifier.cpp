#include "../../OpenNN/opennn/neural_network.h"
#include "headers/signal_classifier.h"


BinaryNNClassifier::BinaryNNClassifier(const OpenNN::NeuralNetwork &nn) : nn(nn) {}

OpenNN::Matrix<double> BinaryNNClassifier::classify(const OpenNN::Matrix<double> &signal) {
    return nn.calculate_outputs(signal);
}
