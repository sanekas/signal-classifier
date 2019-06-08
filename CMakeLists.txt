cmake_minimum_required(VERSION 3.13)
project(signal_classifier)

set(CMAKE_CXX_STANDARD 14)

add_subdirectory(./classifier)
add_subdirectory(./trainer)

link_directories(../OpenNN/build/opennn)

add_executable(signal_classifier main.cpp)

target_link_libraries(signal_classifier LINK_PUBLIC opennn)
