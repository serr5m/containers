#include <gtest/gtest.h>

#include "s21_array.h"

TEST(TestDefaultConstr, Test0) {
  s21::array<int, 0> s21_empty;
  std::array<int, 0> std_empty;
  EXPECT_EQ(s21_empty.size(), std_empty.size());
  //
  // s21
}