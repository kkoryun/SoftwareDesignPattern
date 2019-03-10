cmake_minimum_required(VERSION 3.1.0)

project(MatrixCalculus)

file(GLOB SRC "*.cpp")
file(GLOB HDR "*.h")


add_library(${PROJECT_NAME} ${SRC} ${HDR})
target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
