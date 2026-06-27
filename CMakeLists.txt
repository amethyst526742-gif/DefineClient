
cmake_minimum_required(VERSION 3.10)
project(DefineClient)

include_directories(src/main/cpp/dobby/include)
include_directories(src/main/cpp/dobby/source)

file(GLOB_RECURSE ALL_SOURCES "src/main/cpp/*.cpp")

add_library(DefineClient SHARED ${ALL_SOURCES})

target_link_libraries(DefineClient log)

