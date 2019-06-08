cmake_minimum_required(VERSION 3.13)
project(classifier)

set(CMAKE_CXX_STANDARD 14)

link_directories(../../OpenNN/build/opennn)
link_directories(../../libiec61850/.install/lib)
link_directories(../../libiec61850/.install/include)


add_executable(classifier main.cpp signal_classifier.cpp headers/signal_classifier.h headers/static_model.h static_model.c headers/nn_provider.h nn_provider.cpp)

target_link_libraries(classifier LINK_PUBLIC opennn)
target_link_libraries(classifier LINK_PUBLIC iec61850)
