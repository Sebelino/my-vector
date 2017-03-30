#pragma once

#include <gtest/gtest.h>

class TestFixture : public ::testing::TestWithParam<std::tuple<const char*, const char*>> {};
