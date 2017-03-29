#include <gtest/gtest.h>
//#include "../main.h"
#include "test.h"

//class TestFixture : public ::testing::TestWithParam<std::tuple<std::string>> {};

/*
* @param ({}, "[]")
* @param ({77}, "[77]")
* @param ({77, 3}, "[77, 3]")
*/
TEST_P(TestFixture, StringRepresentation) {
    std::tuple<char*, char*> params = GetParam();
    //std::string returned = std::get<0>(params);
    //Vector v({}});
    //std::stringstream stream;
    //stream << v;
    //std::string repr = stream.str();
    //ASSERT_EQ(repr, "[]");
}

auto t1 = std::make_tuple("meeny", "eeny");
auto t2 = std::make_tuple("miny", "iny");

INSTANTIATE_TEST_CASE_P(OtherVectorTest, TestFixture, ::testing::Values(t1, t2));

//TEST(VectorTest, StringRepresentationEmpty) {
//    Vector v;
//    std::stringstream stream;
//    stream << v;
//    std::string repr = stream.str();
//    ASSERT_EQ(repr, "[]");
//}


int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
