#include <gtest/gtest.h>
#include "../main.h"

class TestFixture
    : public ::testing::TestWithParam<
          std::tuple<std::string, std::tuple<std::size_t, long>>> {};

TEST_P(TestFixture, StringRepresentation) {
  const std::string expected = std::get<0>(GetParam());
  const std::tuple<std::size_t, long> returned = std::get<1>(GetParam());
  const std::size_t num = std::get<0>(returned);
  const long element = std::get<1>(returned);
  const Vector v(num, element);
  std::stringstream stream;
  stream << v;
  const std::string repr = stream.str();
  ASSERT_EQ(expected, repr);
}

INSTANTIATE_TEST_CASE_P(
    OtherVectorTest, TestFixture,
    ::testing::Values(std::make_tuple("[77]", std::make_tuple(1, 77)),
                      std::make_tuple("[77]", std::make_tuple(1, 77)),
                      std::make_tuple("[-1213, -1213]",
                                      std::make_tuple(2, -1213)),
                      std::make_tuple("[0, 0, 0]", std::make_tuple(3, 0))));

TEST(VectorTest, StringRepresentationEmpty) {
  Vector v;
  std::stringstream stream;
  stream << v;
  std::string repr = stream.str();
  ASSERT_EQ("[]", repr);
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
