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
  array(const array &a) { std::copy(a.data_, a.data_ + N, data_); }
  array(array &&a) { std::copy(a.data_, a.data_ + size(), data_); }
  array operator=(array &&a) {
    std::copy(a.data_, a.data_ + N, data_);
    return *this;
  }
  reference operator[](size_type pos) { return data_[pos]; }
  reference at(size_type pos) {
    if (pos >= size()) {
      throw std::out_of_range("Index greater than array size");
    }
    return data_[pos];
  }

  const_reference front() { return *data_; }

  const_reference back() { return *(data_ + size() - 1); }

  iterator data() { return data_; }
  iterator begin() { return data_; }

  iterator end() { return data_ + size(); }

  bool empty() { return size() == 0; }

  size_type size() { return N; }

  size_type max_size() { return N; }

  void swap(array &other) { std::swap(*this, other); }
  void fill(const_reference value) {
    for (size_t i = 0; i < size(); ++i) {
      data_[i] = value;
    }
  }

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