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

  Vector() : size_(0), capacity_(0), p_vector_(NULL){};
  Vector(size_type n) : size_(n), capacity_(n) {
    p_vector_ = new value_type[n];
  };
  Vector(std::initializer_list<value_type> const& items) : {
    size_ = items.size();
    capacity_ = items.size();
    p_vector_ = new value_type[items.size()];

    // auto item = items.begin();
    // for (size_t i = 0; item != items.end(); item++, i++) p_vector_[i] =
    // *item; std::cout << "begin iterator " << items.begin() << std::endl;
  };

  reference operator[](size_type pos) { return p_vector_[pos]; };
  //   value_type operator[](int index) { return p_vector_[index]; };
  value_type operator=(const value_type& v){

  };

  size_t get_size() { return size_; };
  size_t get_capacity() { return capacity_; };
  T* get_pointer() { return p_vector_; };

  //   reference operator[](size_type pos);	access specified element

 private:
  size_t size_;
  size_t capacity_;
  value_type* p_vector_;
};
}  // namespace s21
#endif  // SRC_S21_VECTOR_H_