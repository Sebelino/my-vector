cmake_minimum_required(VERSION 2.8)

project(simpletests)

find_package(PkgConfig)
pkg_check_modules(GTEST REQUIRED gtest>=1.7.0)
include_directories(${GTEST_INCLUDE_DIRS})

enable_testing()

add_executable(${PROJECT_NAME} "test.h" "test.cpp")

target_link_libraries(${PROJECT_NAME} gtest)
