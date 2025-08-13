cmake_minimum_required(VERSION 4.0)

project(tetris VERSION 1.0.0)
cmake_policy(SET CMP0072 NEW)

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} ${CMAKE_CURRENT_SOURCE_DIR}/cmake)
find_package(OpenGL REQUIRED)
find_package(glfw3 REQUIRED)

add_executable(tetris 
    src/main.cpp
    src/glad.c
)

target_include_directories(tetris PRIVATE include)

target_link_libraries(tetris ${GLFW3_LIBRARY} OpenGL::GL)