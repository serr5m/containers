#ifndef SRC_S21_VECTOR_H_
#define SRC_S21_VECTOR_H
// #include <initializer_list.h>

namespace s21 {
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

  Vector() : size_(0), capacity_(0), pointer_vector_(nullptr){};
  Vector(size_type n) : size_(n), capacity_(n) {
    pointer_vector_ = new value_type[n];
  };
  Vector(std::initializer_list<value_type> const& items)
      : size_(items.size()),
        capacity_(items.size()),
        pointer_vector_(new value_type[items.size()]) {
    auto item = items.begin();
    for (size_t i = 0; item != items.end(); ++i, ++item) {
      pointer_vector_[i] = *item;
    }
  };
  Vector(const Vector& v)
      : size_(v.size_),
        capacity_(v.capacity_),
        pointer_vector_(new value_type[v.capacity_]) {
    for (size_t i = 0; i < size_; ++i) {
      pointer_vector_[i] = v.pointer_vector_[i];
    }
  };
  Vector(Vector&& v)
      : size_(v.size_), capacity_(v.size_), pointer_vector_(v.pointer_vector_) {
    v.size_ = 0;
    v.capacity_ = 0;
    v.pointer_vector_ = nullptr;
  };
  ~Vector() { RemoveVector(); };

  reference operator[](size_type pos) { return pointer_vector_[pos]; };
  //   value_type operator[](int index) { return pointer_vector_[index]; };
  Vector& operator=(Vector&& v) {
    RemoveVector();
    size_ = v.size_;
    capacity_ = v.size_;
    pointer_vector_ = v.pointer_vector_;
    v.size_ = 0;
    v.capacity_ = 0;
    v.pointer_vector_ = nullptr;
    return *this;
  };
  reference at(size_type pos) {
    if (pos >= size_) {
      throw std::out_of_range("Index greater than vector size ");
    }
    return pointer_vector_[pos];
  }

  void RemoveVector() { delete[] pointer_vector_; };
  size_t get_size() { return size_; };
  size_t get_capacity() { return capacity_; };
  T* get_pointer() { return pointer_vector_; };

  //   reference operator[](size_type pos);	access specified element

 private:
  size_t size_;
  size_t capacity_;
  value_type* pointer_vector_;
};
}  // namespace s21
#endif  // SRC_S21_VECTOR_H_