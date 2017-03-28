#include <gtest/gtest.h>
#include "../main.h"

class TestFixture : public ::testing::TestWithParam<std::tuple<int, std::string>> {};

/*
* @param ({}, "[]")
* @param ({77}, "[77]")
* @param ({77, 3}, "[77, 3]")
*/
TEST_P(TestFixture, StringRepresentation) {
    std::string expected = std::get<0>(GetParam());
    std::string returned = std::get<1>(GetParam());
    Vector v({}});
    std::stringstream stream;
    stream << v;
    std::string repr = stream.str();
    ASSERT_EQ(repr, "[]");
}

INSTANTIATE_TEST_CASE_P(VectorTest, TextFixture, ::testing::Values(std::make_tuple("meeny", "meeny"), std::make_tuple("miny", "miny")));

TEST(VectorTest, StringRepresentationEmpty) {
    Vector v;
    std::stringstream stream;
    stream << v;
    std::string repr = stream.str();
    ASSERT_EQ(repr, "[]");
}


int main(int argc, char **argv) {
    for(int i = 0; i < 100; ++i) {
        numbers.push_back(i);
        strings.push_back("hoy");
    }
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
