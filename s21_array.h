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

  array(){};
  array(std::initializer_list<value_type> const &items) {
    if (items.size() > N) {
      throw std::length_error("Too many initializers");
    }
    auto it = items.begin();
    for (size_t i = 0; it != items.end(); ++i, ++it) {
      data_[i] = *it;
    }
  }
  array(const array &a) { CopyData(a); }
  array(array &&a) {
    for (size_t i = 0; i < size(); ++i) {
      data_[i] = a.data_[i];
    }
  }
  size_type size() { return N; }
  reference operator[](size_type pos) { return data_[pos]; }

 private:
  value_type data_[N];

  void CopyData(const array &a) {
    for (size_t i = 0; i < size(); ++i) {
      data_[i] = a.data_[i];
    }
  }
};
}  // namespace s21

#endif  // SRC_S21_ARRAY_H