cmake_minimum_required(VERSION 3.24)
project(camera)

add_subdirectory(extlibs/SFML)

set(CMAKE_CXX_STANDARD 17)

add_executable(${PROJECT_NAME} main.cpp)

target_link_libraries(${PROJECT_NAME} PRIVATE sfml-network)
