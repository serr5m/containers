#include <gtest/gtest.h>

#include "../s21_containersplus.h"

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

TEST(CopyConstr, test0) {
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
  std::array<int, 6> std_array{1, 2, 3, 4, 5, 6};
  EXPECT_EQ(s21_array.front(), s21_array[0]);
  EXPECT_EQ(s21_array.front(), std_array.front());
}

TEST(Back, test0) {
  s21::array<int, 6> s21_array{1, 2, 3, 4, 5, 6};
  std::array<int, 6> std_array{1, 2, 3, 4, 5, 6};
  EXPECT_EQ(s21_array.back(), s21_array[s21_array.size() - 1]);
  EXPECT_EQ(s21_array.back(), std_array.back());
}

TEST(Data, test0) {
  s21::array<int, 6> s21_array{1, 2, 3, 4, 5, 6};
  EXPECT_EQ(*s21_array.data(), s21_array.front());
  //
}
TEST(Begin, test0) {
  s21::array<int, 6> s21_array{1, 2, 3, 4, 5, 6};
  EXPECT_EQ(*s21_array.begin(), s21_array.front());
  EXPECT_EQ(*s21_array.begin() + 1, s21_array[1]);
}

TEST(End, test0) {
  s21::array<int, 0> s21_array;
  EXPECT_EQ(s21_array.begin(), s21_array.end());
  EXPECT_EQ(s21_array.end(), s21_array.begin() + s21_array.size());
}

TEST(Empty, test0) {
  s21::array<int, 0> s21_array;
  EXPECT_TRUE(s21_array.empty());
}

TEST(Empty, test1) {
  s21::array<int, 1> s21_array;
  EXPECT_FALSE(s21_array.empty());
}

TEST(Size, test0) {
  s21::array<int, 1> s21_array{1};
  std::array<int, 1> std_array{2};
  EXPECT_EQ(s21_array.size(), std_array.size());
}
TEST(Size, test1) {
  s21::array<int, 0> s21_array;
  std::array<int, 0> std_array;
  EXPECT_EQ(s21_array.size(), std_array.size());
}

TEST(Max_size, test0) {
  s21::array<int, 3> s21_array{1, 2, 3};
  std::array<int, 3> std_array{4, 5, 6};
  EXPECT_EQ(s21_array.max_size(), std_array.max_size());
}

TEST(Swap, test0) {
  s21::array<int, 3> s21_array{1, 2, 3};
  s21::array<int, 3> s21_array2{3, 2, 1};
  std::array<int, 3> std_array{1, 2, 3};
  std::array<int, 3> std_array2{3, 2, 1};
  s21_array.swap(s21_array2);
  std_array.swap(std_array2);
  for (size_t i = 0; i < s21_array2.size(); ++i) {
    EXPECT_EQ(s21_array[i], std_array[i]);
  }
}

TEST(Fill, test0) {
  s21::array<int, 3> s21_array{1, 2, 3};
  std::array<int, 3> std_array{1, 2, 3};
  s21_array.fill(5);
  std_array.fill(5);
  for (size_t i = 0; i < s21_array.size(); ++i) {
    EXPECT_EQ(s21_array[i], std_array[i]);
  }
}
