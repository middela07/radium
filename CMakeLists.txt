cmake_minimum_required(VERSION 3.10)
project(radium)

set(CMAKE_CXX_STANDARD 17)

# Include nlohmann JSON library
include(FetchContent)
FetchContent_Declare(
    json
    URL https://github.com/nlohmann/json/releases/download/v3.11.2/json.hpp
)
FetchContent_MakeAvailable(json)

add_executable(radium src/main.cpp)
target_include_directories(radium PRIVATE ${json_SOURCE_DIR})
