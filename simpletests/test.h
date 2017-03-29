#pragma once

#include <gtest/gtest.h>

class TestFixture : public ::testing::TestWithParam<std::tuple<char*, char*>> {};
