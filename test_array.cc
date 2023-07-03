#include <gtest/gtest.h>

#include "s21_array.h"

TEST(DefaultConstr, test0) {
  s21::array<int, 0> s21_empty;
  std::array<int, 0> std_empty;
  EXPECT_EQ(s21_empty.size(), std_empty.size());
  EXPECT_EQ(s21_empty.size(), std_empty.size());
}
TEST(DefaultConstr, test1) {
  s21::array<int, 4> s21_empty;
  std::array<int, 5> std_empty;
  EXPECT_NE(s21_empty.size(), std_empty.size());
  EXPECT_NE(s21_empty.size(), std_empty.size());
}

TEST(InitializerListConstructor, test0) {
  s21::array<int, 6> s21_array{1, 2, 3, 4, 5, 6};
  std::array<int, 6> std_array{1, 2, 3, 4, 5, 6};
  for (size_t i = 0; i < s21_array.size(); ++i) {
    EXPECT_EQ(s21_array[i], std_array[i]);
  }
}

TEST(Copy_Constr, test0) {
  s21::array<int, 6> s21_array{1, 2, 3, 4, 5, 6};
  s21::array<int, 6> s21_copy(s21_array);
  std::array<int, 6> std_array{1, 2, 3, 4, 5, 6};
  std::array<int, 6> std_copy(std_array);
  for (size_t i = 0; i < s21_copy.size(); ++i) {
    EXPECT_EQ(s21_copy[i], std_copy[i]);
    EXPECT_EQ(s21_array[i], std_array[i]);
  }
}

TEST(Move_Constr, test0) {
  s21::array<int, 6> s21_array{1, 2, 3, 4, 5, 6};
  s21::array<int, 6> s21_move(std::move(s21_array));
  std::array<int, 6> std_array{1, 2, 3, 4, 5, 6};
  std::array<int, 6> std_move(std::move(std_array));
  for (size_t i = 0; i < s21_move.size(); ++i) {
    EXPECT_EQ(s21_move[i], std_move[i]);
    EXPECT_EQ(s21_array[i], std_array[i]);
  }
}

TEST(Operator_Equal_Copy, test0) {
  s21::array<int, 6> s21_array{1, 2, 3, 4, 5, 6};
  s21::array<int, 6> s21_operator_equal = s21_array;
  for (size_t i = 0; i < s21_array.size(); ++i) {
    EXPECT_EQ(s21_array[i], s21_operator_equal[i]);
    EXPECT_EQ(s21_array[i], s21_operator_equal[i]);
  }
}

TEST(Operator_Equal_Move, test0) {
  s21::array<int, 6> s21_array{1, 2, 3, 4, 5, 6};
  s21::array<int, 6> s21_operator_equal = std::move(s21_array);
  for (size_t i = 0; i < s21_array.size(); ++i) {
    EXPECT_EQ(s21_array[i], s21_operator_equal[i]);
    EXPECT_EQ(s21_array[i], s21_operator_equal[i]);
  }
}

TEST(Operator_Square_Bracket, test0) {
  s21::array<int, 6> s21_array{1, 2, 3, 4, 5, 6};
  EXPECT_EQ(s21_array[3], 4);
}

TEST(At, test0) {
  s21::array<int, 6> s21_array{1, 2, 3, 4, 5, 6};
  EXPECT_EQ(s21_array[4], 5);
}

TEST(At, test1) {
  s21::array<int, 6> s21_array{1, 2, 3, 4, 5, 6};
  ASSERT_ANY_THROW(s21_array.at(6));
}

TEST(Front, test0) {
  s21::array<int, 6> s21_array{1, 2, 3, 4, 5, 6};

  //
  //
}

// int main(int argc, char** argv) {
//   testing::InitGoogleTest(&argc, argv);
//   return RUN_ALL_TESTS();
// }