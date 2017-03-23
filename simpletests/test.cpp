#include <gtest/gtest.h>
#include "../main.h"

TEST(VectorTest, StringRepresentation) {
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
