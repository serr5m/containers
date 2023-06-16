#ifndef SRC_S21_VECTOR_H_
#define SRC_S21_VECTOR_H

template <typename T>
class Vector {
 public:
  int aboba = 5;
  using value_type = T;
  using reference = T&;
  using const_reference = const T&;
  using iterator = T*;
  using const_iterator = const T*;
  using size_type = size_t;
};
#endif  // SRC_S21_VECTOR_H_