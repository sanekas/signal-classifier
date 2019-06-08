cmake_minimum_required(VERSION 3.13)
project(trainer)

set(CMAKE_CXX_STANDARD 14)

link_directories(../../OpenNN/build/opennn)

add_executable(trainer main.cpp nnmodel_trainer.cpp headers/nnmodel_trainer.h dataset_loader.cpp headers/dataset_loader.h dataset_provider.cpp headers/dataset_provider.h)

target_link_libraries(trainer LINK_PUBLIC opennn)