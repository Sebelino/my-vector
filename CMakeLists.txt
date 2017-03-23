cmake_minimum_required(VERSION 2.8)

project(simple)
#file(GLOB HEADERS *.hpp *.h)
#file(GLOB SOURCES *.cpp)
#add_subdirectory(test)
add_executable(${PROJECT_NAME} "main.cpp" "main.h")
