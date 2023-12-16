#include <gtest/gtest.h>

#include "../my_containersplus.h"

TEST(DefaultConstr, test0) {
  my::array<int, 0> my_empty;
  std::array<int, 0> std_empty;
  EXPECT_EQ(my_empty.size(), std_empty.size());
  EXPECT_EQ(my_empty.size(), std_empty.size());
}

TEST(DefaultConstr, test1) {
  my::array<int, 4> my_empty;
  std::array<int, 5> std_empty;
  EXPECT_NE(my_empty.size(), std_empty.size());
  EXPECT_NE(my_empty.size(), std_empty.size());
}

TEST(InitializerListConstructor, test0) {
  my::array<int, 6> my_array{1, 2, 3, 4, 5, 6};
  std::array<int, 6> std_array{1, 2, 3, 4, 5, 6};
  for (size_t i = 0; i < my_array.size(); ++i) {
    EXPECT_EQ(my_array[i], std_array[i]);
  }
}

TEST(CopyConstr, test0) {
  my::array<int, 6> my_array{1, 2, 3, 4, 5, 6};
  my::array<int, 6> my_copy(my_array);
  std::array<int, 6> std_array{1, 2, 3, 4, 5, 6};
  std::array<int, 6> std_copy(std_array);
  for (size_t i = 0; i < my_copy.size(); ++i) {
    EXPECT_EQ(my_copy[i], std_copy[i]);
    EXPECT_EQ(my_array[i], std_array[i]);
  }
}

TEST(Move_Constr, test0) {
  my::array<int, 6> my_array{1, 2, 3, 4, 5, 6};
  my::array<int, 6> my_move(std::move(my_array));
  std::array<int, 6> std_array{1, 2, 3, 4, 5, 6};
  std::array<int, 6> std_move(std::move(std_array));
  for (size_t i = 0; i < my_move.size(); ++i) {
    EXPECT_EQ(my_move[i], std_move[i]);
    EXPECT_EQ(my_array[i], std_array[i]);
  }
}

TEST(Operator_Equal_Copy, test0) {
  my::array<int, 6> my_array{1, 2, 3, 4, 5, 6};
  my::array<int, 6> my_operator_equal = my_array;
  for (size_t i = 0; i < my_array.size(); ++i) {
    EXPECT_EQ(my_array[i], my_operator_equal[i]);
    EXPECT_EQ(my_array[i], my_operator_equal[i]);
  }
}

TEST(Operator_Equal_Move, test0) {
  my::array<int, 6> my_array{1, 2, 3, 4, 5, 6};
  my::array<int, 6> my_operator_equal = std::move(my_array);
  for (size_t i = 0; i < my_array.size(); ++i) {
    EXPECT_EQ(my_array[i], my_operator_equal[i]);
    EXPECT_EQ(my_array[i], my_operator_equal[i]);
  }
}

TEST(Operator_Square_Bracket, test0) {
  my::array<int, 6> my_array{1, 2, 3, 4, 5, 6};
  EXPECT_EQ(my_array[3], 4);
}

TEST(At, test0) {
  my::array<int, 6> my_array{1, 2, 3, 4, 5, 6};
  EXPECT_EQ(my_array[4], 5);
}

TEST(At, test1) {
  my::array<int, 6> my_array{1, 2, 3, 4, 5, 6};
  ASSERT_ANY_THROW(my_array.at(6));
}

TEST(Front, test0) {
  my::array<int, 6> my_array{1, 2, 3, 4, 5, 6};
  std::array<int, 6> std_array{1, 2, 3, 4, 5, 6};
  EXPECT_EQ(my_array.front(), my_array[0]);
  EXPECT_EQ(my_array.front(), std_array.front());
}

TEST(Back, test0) {
  my::array<int, 6> my_array{1, 2, 3, 4, 5, 6};
  std::array<int, 6> std_array{1, 2, 3, 4, 5, 6};
  EXPECT_EQ(my_array.back(), my_array[my_array.size() - 1]);
  EXPECT_EQ(my_array.back(), std_array.back());
}

TEST(Data, test0) {
  my::array<int, 6> my_array{1, 2, 3, 4, 5, 6};
  EXPECT_EQ(*my_array.data(), my_array.front());
  //
}
TEST(Begin, test0) {
  my::array<int, 6> my_array{1, 2, 3, 4, 5, 6};
  EXPECT_EQ(*my_array.begin(), my_array.front());
  EXPECT_EQ(*my_array.begin() + 1, my_array[1]);
}

TEST(End, test0) {
  my::array<int, 0> my_array;
  EXPECT_EQ(my_array.begin(), my_array.end());
  EXPECT_EQ(my_array.end(), my_array.begin() + my_array.size());
}

TEST(Empty, test0) {
  my::array<int, 0> my_array;
  EXPECT_TRUE(my_array.empty());
}

TEST(Empty, test1) {
  my::array<int, 1> my_array;
  EXPECT_FALSE(my_array.empty());
}

TEST(Size, test0) {
  my::array<int, 1> my_array{1};
  std::array<int, 1> std_array{2};
  EXPECT_EQ(my_array.size(), std_array.size());
}
TEST(Size, test1) {
  my::array<int, 0> my_array;
  std::array<int, 0> std_array;
  EXPECT_EQ(my_array.size(), std_array.size());
}

TEST(Max_size, test0) {
  my::array<int, 3> my_array{1, 2, 3};
  std::array<int, 3> std_array{4, 5, 6};
  EXPECT_EQ(my_array.max_size(), std_array.max_size());
}

TEST(Swap, test0) {
  my::array<int, 3> my_array{1, 2, 3};
  my::array<int, 3> my_array2{3, 2, 1};
  std::array<int, 3> std_array{1, 2, 3};
  std::array<int, 3> std_array2{3, 2, 1};
  my_array.swap(my_array2);
  std_array.swap(std_array2);
  for (size_t i = 0; i < my_array2.size(); ++i) {
    EXPECT_EQ(my_array[i], std_array[i]);
  }
}

TEST(Fill, test0) {
  my::array<int, 3> my_array{1, 2, 3};
  std::array<int, 3> std_array{1, 2, 3};
  my_array.fill(5);
  std_array.fill(5);
  for (size_t i = 0; i < my_array.size(); ++i) {
    EXPECT_EQ(my_array[i], std_array[i]);
  }
}
