#include <gtest/gtest.h>
#include "../main.h"

class TestFixture : public ::testing::TestWithParam<std::tuple<const char*, const char*>> {};

/*
* @param ({}, "[]")
* @param ({77}, "[77]")
* @param ({77, 3}, "[77, 3]")
*/
TEST_P(TestFixture, StringRepresentation) {
    std::string expected = std::get<0>(GetParam());
    std::string returned = std::get<1>(GetParam());
    Vector v(5, 77);
    std::cout << v << std::endl;
    //std::stringstream stream;
    //stream << v;
    //std::string repr = stream.str();
    //ASSERT_EQ(repr, "[]");
}

auto t1 = std::make_tuple("meeny", "eeny");
auto t2 = std::make_tuple("miny", "iny");

INSTANTIATE_TEST_CASE_P(OtherVectorTest, TestFixture, ::testing::Values(t1, t2));

TEST(VectorTest, StringRepresentationEmpty) {
    Vector v;
    std::stringstream stream;
    stream << v;
    std::string repr = stream.str();
    ASSERT_EQ(repr, "[]");
}


int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
