#ifndef SRC_S21_ARRAY_H
#define SRC_S21_ARRAY_H
#include <stdlib.h>

namespace s21 {
template <typename T, size_t N>
class array {
 public:
  using value_type = T;
  using reference = T &;
  using const_reference = const T &;
  using iterator = T *;
  using const_iterator = const T *;
  using size_type = size_t;

  array() : size_(N){};
  array(std::initializer_list<value_type> const &items) {
    // size_ =
    //
    //
  }
  size_type size() { return size_; }

 private:
  value_type data_[N];
  size_type size_;

  //
};
}  // namespace s21

#endif  // SRC_S21_ARRAY_H