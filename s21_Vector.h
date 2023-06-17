#ifndef SRC_S21_VECTOR_H_
#define SRC_S21_VECTOR_H

namespace s21 {
template <typename T>
class Vector {
 public:
  Vector() : size_(0), capacity_(0){};
  int aboba = 5;
  using value_type = T;
  using reference = T&;
  using const_reference = const T&;
  using iterator = T*;
  using const_iterator = const T*;
  using size_type = size_t;

 private:
  size_t size_;
  size_t capacity_;
};
}  // namespace s21
#endif  // SRC_S21_VECTOR_H_