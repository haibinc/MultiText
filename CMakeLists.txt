cmake_minimum_required(VERSION 3.23)
project(MultiText)

set(CMAKE_CXX_STANDARD 14)

add_executable(MultiText main.cpp ResourceHandler.cpp ResourceHandler.h ResourceHolder.h Typing.cpp Typing.h MultiText.cpp MultiText.h Letter.cpp Letter.h)

find_package(SFML 2.5 COMPONENTS system window graphics network audio REQUIRED)
include_directories(${SFML_INCLUDE_DIRS})
target_link_libraries(MultiText sfml-system sfml-window sfml-graphics sfml-audio sfml-network)