#ifndef SRC_S21_VECTOR_H_
#define SRC_S21_VECTOR_H

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

  Vector() : size_(0), capacity_(0){};
  Vector(size_type n)
      : size_(n),
        capacity_(n){
            //
        };

  size_t size_;
  size_t capacity_;

 private:
};
}  // namespace s21
#endif  // SRC_S21_VECTOR_H_