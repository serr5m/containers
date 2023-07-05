#include <gtest/gtest.h>

#include <vector>

#include "s21_vector.h"

// namespace s21 {
// template <typename T>
class TestVector {
 public:
  s21::vector<int> s21_vector_empty;
  s21::vector<int> s21_vector_initializer{1, 2, 3, 4, 5, 6, 7};

  std::vector<int> std_vector_empty;
  std::vector<int> std_vector_initializer{1, 2, 3, 4, 5, 6, 7};
};

TEST(default_constructor, test0) {
  TestVector t;
  EXPECT_EQ(t.s21_vector_empty.size(), t.std_vector_empty.size());
  EXPECT_EQ(t.s21_vector_empty.capacity(), t.std_vector_empty.capacity());
}

TEST(vector_with_size, test0) {
  s21::vector<int> s21_vector_with_size(6);
  std::vector<int> std_vector_with_size(6);
  EXPECT_EQ(s21_vector_with_size.size(), std_vector_with_size.size());
}

TEST(vector_with_initializer, test0) {
  TestVector t;
  for (size_t i = 0; i < t.s21_vector_initializer.size(); ++i) {
    EXPECT_EQ(t.s21_vector_initializer[i], t.std_vector_initializer[i]);
  }
}

TEST(copy_constructor, test0) {
  TestVector t;
  s21::vector<int> s21_vector_copy(t.s21_vector_initializer);
  std::vector<int> std_vector_copy(t.std_vector_initializer);
  for (size_t i; i < s21_vector_copy.size(); ++i) {
    EXPECT_EQ(s21_vector_copy[i], std_vector_copy[i]);
  }
  EXPECT_EQ(s21_vector_copy.size(), t.s21_vector_initializer.size());
  EXPECT_EQ(s21_vector_copy.capacity(), t.s21_vector_initializer.capacity());
  EXPECT_EQ(std_vector_copy.size(), t.std_vector_initializer.size());
  EXPECT_EQ(std_vector_copy.capacity(), t.std_vector_initializer.capacity());
}

TEST(move_constructor, test0) {
  s21::vector<int> s21_for_move{2, 4, 6, 8};
  s21::vector<int> s21_vector_move(std::move(s21_for_move));

  std::vector<int> std_for_move{2, 4, 6, 8};
  std::vector<int> std_vector_move(std::move(std_for_move));

  for (size_t i; i < s21_vector_move.size(); ++i) {
    EXPECT_EQ(s21_vector_move[i], std_vector_move[i]);
  }
  EXPECT_EQ(s21_vector_move.size(), std_vector_move.size());
  EXPECT_EQ(s21_vector_move.capacity(), std_vector_move.capacity());
  EXPECT_EQ(s21_vector_move.size(), std_vector_move.size());
  EXPECT_EQ(s21_vector_move.capacity(), std_vector_move.capacity());

  EXPECT_EQ(s21_for_move.size(), std_for_move.size());
  EXPECT_EQ(s21_for_move.capacity(), std_for_move.capacity());
  EXPECT_EQ(s21_for_move.size(), std_for_move.size());
  EXPECT_EQ(s21_for_move.capacity(), std_for_move.capacity());
}

TEST(at, test0) {
  TestVector t;
  EXPECT_EQ(t.s21_vector_initializer.at(3), t.std_vector_initializer.at(3));
  EXPECT_ANY_THROW(t.s21_vector_initializer.at(-1));
  EXPECT_ANY_THROW(t.s21_vector_initializer.at(7));
}

TEST(operator_square_bracket, test0) {
  TestVector t;
  for (size_t i = 0; i < t.s21_vector_initializer.size(); ++i) {
    EXPECT_EQ(t.s21_vector_initializer[i], t.std_vector_initializer[i]);
  }
}

TEST(operator_equal_copy, test0) {
  s21::vector<int> s21_vector{1, 2, 3, 4, 5};
  s21::vector<int> s21_vector_2{6, 7, 8, 9};

  std::vector<int> std_vector{1, 2, 3, 4, 5};
  std::vector<int> std_vector_2{6, 7, 8, 9};
  s21_vector_2 = s21_vector;
  std_vector_2 = std_vector;
  for (size_t i = 0; i < s21_vector_2.size(); i++) {
    EXPECT_EQ(s21_vector_2[i], std_vector_2[i]);
    EXPECT_EQ(s21_vector[i], std_vector[i]);
  }
  EXPECT_EQ(s21_vector.size(), std_vector.size());
  EXPECT_EQ(s21_vector.capacity(), std_vector.capacity());
}

TEST(operator_equal_move, test0) {
  s21::vector<int> s21_vector{1, 2, 3, 4, 5};
  s21::vector<int> s21_vector_2{6, 7, 8, 9};

  std::vector<int> std_vector{1, 2, 3, 4, 5};
  std::vector<int> std_vector_2{6, 7, 8, 9};

  for (size_t i = 0; i < s21_vector_2.size(); i++) {
    EXPECT_EQ(s21_vector_2[i], std_vector_2[i]);
    EXPECT_EQ(s21_vector[i], std_vector[i]);
  }

  EXPECT_EQ(s21_vector.size(), std_vector.size());
  EXPECT_EQ(s21_vector.capacity(), std_vector.capacity());
}

TEST(front, test0) {
  TestVector t;
  EXPECT_EQ(t.s21_vector_initializer[0], t.s21_vector_initializer.front());
}

TEST(back, test0) {
  TestVector t;
  EXPECT_EQ(t.s21_vector_initializer.back(),
            t.s21_vector_initializer[t.s21_vector_initializer.size() - 1]);
  EXPECT_EQ(t.s21_vector_initializer.back(), t.std_vector_initializer.back());
}

TEST(data, test0) {
  TestVector t;
  EXPECT_EQ(*t.s21_vector_initializer.data(), *t.std_vector_initializer.data());
}

TEST(begin, test0) {
  TestVector t;
  EXPECT_EQ(*t.s21_vector_initializer.begin(),
            *t.std_vector_initializer.begin());
}

TEST(end, test0) {
  TestVector t;
  //   EXPECT_EQ(*t.s21_vector_initializer.end() - 1,
  //             *t.std_vector_initializer.end() - 1);
  EXPECT_EQ(t.s21_vector_initializer.end(),
            t.s21_vector_initializer.begin() + t.s21_vector_initializer.size());
}

TEST(empty, test0) {
  TestVector t;
  EXPECT_TRUE(t.s21_vector_empty.empty());
  EXPECT_FALSE(t.s21_vector_initializer.empty());
}

TEST(size, test0) {
  TestVector t;
  EXPECT_EQ(t.s21_vector_initializer.size(), t.std_vector_initializer.size());
}

TEST(max_size, test0) {
  TestVector t;
  EXPECT_EQ(t.s21_vector_empty.max_size(), t.std_vector_empty.max_size());
  EXPECT_EQ(t.s21_vector_empty.max_size(), t.std_vector_initializer.max_size());
}

TEST(reserve, test0) {
  s21::vector<double> s21_vector{2, 3, 5, 7.7, 8.8};
  s21_vector.reserve(15);

  std::vector<double> std_vector{2, 3, 5, 7.7, 8.8};
  std_vector.reserve(15);

  for (size_t i = 0; i < s21_vector.size(); i++) {
    EXPECT_EQ(s21_vector[i], std_vector[i]);
  }

  EXPECT_EQ(s21_vector.size(), std_vector.size());
  EXPECT_EQ(s21_vector.capacity(), std_vector.capacity());
}

TEST(capacity, test0) {
  TestVector t;
  EXPECT_EQ(t.s21_vector_empty.capacity(), t.std_vector_empty.capacity());
  EXPECT_EQ(t.s21_vector_initializer.capacity(),
            t.std_vector_initializer.capacity());
}

TEST(shrink_to_fit, test0) {
  s21::vector<char> s21_vector{9, 8, 7, 6, 5};
  s21_vector.push_back(12);
  std::vector<char> std_vector{9, 8, 7, 6, 5};
  std_vector.push_back(12);

  EXPECT_EQ(s21_vector.capacity(), std_vector.capacity());
  s21_vector.shrink_to_fit();
  std_vector.shrink_to_fit();
  EXPECT_EQ(s21_vector.capacity(), std_vector.capacity());
  //   std::cout << s21_vector.capacity() << std::endl;
}

TEST(clear, test0) {
  s21::vector<int> s21_vector{1, 2, 3, 4, 5, 6};
  std::vector<int> std_vector{1, 2, 3, 4, 5, 6};

  s21_vector.clear();
  std_vector.clear();

  EXPECT_EQ(s21_vector.size(), std_vector.size());
  EXPECT_EQ(s21_vector.capacity(), std_vector.capacity());
}

TEST(insert, test0) {
  s21::vector<int> s21_vector{5, 6, 7, 8, 9, 10};
  std::vector<int> std_vector{5, 6, 7, 8, 9, 10};

  s21_vector.insert(s21_vector.begin() + 4, 14);
  std_vector.insert(std_vector.begin() + 4, 14);

  for (size_t i = 0; i < s21_vector.size(); i++) {
    EXPECT_EQ(s21_vector[i], std_vector[i]);
  }
  EXPECT_EQ(s21_vector.size(), std_vector.size());
  EXPECT_EQ(s21_vector.capacity(), std_vector.capacity());
}

TEST(erase, test0) {
  s21::vector<int> s21_vector{5, 6, 7, 8, 9, 10};
  std::vector<int> std_vector{5, 6, 7, 8, 9, 10};

  s21_vector.erase(s21_vector.begin() + 2);
  std_vector.erase(std_vector.begin() + 2);

  // std::cout << "s21 capa " << s21_vector.capacity() << " s21 size "
  //           << s21_vector.size() << std::endl;
  // std::cout << "std capa " << std_vector.capacity() << " std size "
  //           << std_vector.size() << std::endl;

  for (size_t i = 0; i < std_vector.size(); i++) {
    // std::cout << std_vector[i] << std::endl;
    EXPECT_EQ(s21_vector[i], std_vector[i]);
  }
  EXPECT_EQ(s21_vector.size(), std_vector.size());
  EXPECT_EQ(s21_vector.capacity(), std_vector.capacity());
}

TEST(push_back, test0) {
  s21::vector<int> s21_vector{1, 2, 3, 4, 5};
  std::vector<int> std_vector{1, 2, 3, 4, 5};

  s21_vector.push_back(9);
  std_vector.push_back(9);

  for (size_t i = 0; i < s21_vector.size(); i++) {
    EXPECT_EQ(s21_vector[i], std_vector[i]);
  }
}

TEST(pop_back, test0) {
  s21::vector<int> s21_vector{1, 2, 3, 4, 5};
  std::vector<int> std_vector{1, 2, 3, 4, 5};

  s21_vector.pop_back();
  std_vector.pop_back();

  for (size_t i = 0; i < s21_vector.size(); i++) {
    EXPECT_EQ(s21_vector[i], std_vector[i]);
  }
}

TEST(swap, test0) {
  s21::vector<int> s21_vector{1, 2, 3, 4, 5};
  s21::vector<int> s21_vector2{6, 7, 8};
  s21_vector.swap(s21_vector2);

  std::vector<int> std_vector{1, 2, 3, 4, 5};
  std::vector<int> std_vector2{6, 7, 8};
  std_vector.swap(std_vector2);
}
