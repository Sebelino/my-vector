#include <gtest/gtest.h>
#include "../main.h"

TEST(VectorTest, StringRepresentationEmpty) {
    Vector v;
    std::stringstream stream;
    stream << v;
    std::string repr = stream.str();
    ASSERT_EQ(repr, "[]");
}

/*
 * @param ({}, "[]")
 * @param ({77}, "[77]")
 * @param ({77, 3}, "[77, 3]")
 */
TEST(VectorTest, StringRepresentation) {
    Vector v({});
    std::stringstream stream;
    stream << v;
    std::string repr = stream.str();
    ASSERT_EQ(repr, "[]");
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
