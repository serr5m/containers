#ifndef SRC_S21_VECTOR_H_
#define SRC_S21_VECTOR_H_
#include <initializer_list>
#include <limits>

namespace s21 {
template <typename T>
class vector {
 public:
  using value_type = T;
  using reference = T&;
  using const_reference = const T&;
  using iterator = T*;
  using const_iterator = const T*;
  using size_type = size_t;

  vector() : size_(0), capacity_(0), pointer_vector_(nullptr){};
  vector(size_type n) : size_(n), capacity_(n) {
    pointer_vector_ = new value_type[n];
  };
  vector(std::initializer_list<value_type> const& items)
      : size_(items.size()),
        capacity_(items.size()),
        pointer_vector_(new value_type[items.size()]) {
    auto item = items.begin();
    for (size_t i = 0; item != items.end(); ++i, ++item) {
      pointer_vector_[i] = *item;
    }
  };
  vector(const vector& v)
      : size_(v.size_),
        capacity_(v.capacity_),
        pointer_vector_(new value_type[v.capacity_]) {
    for (size_t i = 0; i < size_; ++i) {
      pointer_vector_[i] = v.pointer_vector_[i];
    }
  };
  vector(vector&& v) : size_(0), capacity_(0), pointer_vector_(nullptr) {
    std::swap(size_, v.size_);
    std::swap(capacity_, v.capacity_);
    std::swap(pointer_vector_, v.pointer_vector_);
  };
  ~vector() { RemoveVector(); };

  reference at(size_type pos) {
    if (pos >= size_) {
      throw std::out_of_range("Index greater than vector size ");
    }
    return pointer_vector_[pos];
  }
  reference operator[](size_type pos) { return pointer_vector_[pos]; };
  //   value_type operator[](int index) { return pointer_vector_[index]; };
  vector& operator=(vector&& v) {
    RemoveVector();
    std::swap(size_, v.size_);
    std::swap(capacity_, v.capacity_);
    std::swap(pointer_vector_, v.pointer_vector_);
    return *this;
  };

  vector& operator=(const vector& v) {
    RemoveVector();
    pointer_vector_ = new value_type[v.size_];
    size_ = v.size_;
    capacity_ = v.capacity_;
    std::copy(v.pointer_vector_, v.pointer_vector_ + size_, begin());
    return *this;
  };
  const reference front() { return *pointer_vector_; };

  const reference back() { return *(pointer_vector_ + size_ - 1); }

  T* data() { return pointer_vector_; }

  iterator begin() { return pointer_vector_; }

  iterator end() { return (pointer_vector_ + size_); }

  bool empty() { return !size_; }

  size_type size() { return size_; }

  size_type max_size() {
    return std::numeric_limits<std::ptrdiff_t>::max() / sizeof(value_type);
  }

  void reserve(size_type new_size) {
    if (new_size > max_size()) {
      throw std::length_error("Size greater than max_size");
    }
    if (capacity_ < new_size) {
      value_type* tmp = pointer_vector_;
      pointer_vector_ = new value_type[new_size];
      for (size_t i = 0; i < size_; ++i) {
        pointer_vector_[i] = tmp[i];
      }
      delete[] tmp;
      capacity_ = new_size;
    }
  }

  size_type capacity() { return capacity_; }

  void shrink_to_fit() {
    if (capacity_ > size_) {
      value_type* tmp = pointer_vector_;
      pointer_vector_ = new value_type[size_];
      for (size_t i = 0; i < size_; ++i) {
        pointer_vector_[i] = tmp[i];
      }
      delete[] tmp;
      capacity_ = size_;
    }
  }

  void clear() { size_ = 0; }

  iterator insert(iterator pos, const_reference value) {
    s21::vector<value_type> new_vector;
    if (size_ == capacity_) {
      int new_capacity = capacity_ == 0 ? 1 : capacity_ * 2;
      new_vector.reserve(new_capacity);
    }
    int distance = std::distance(begin(), pos);
    std::copy(begin(), begin() + distance, new_vector.begin());
    new_vector[distance] = value;
    std::copy(begin() + distance, end(), new_vector.begin() + distance + 1);
    new_vector.size_ = ++size_;
    swap(new_vector);
    return begin() + distance;
  }

  void erase(iterator pos) {
    s21::vector<value_type> new_vector(size_);
    int distance = std::distance(begin(), pos);
    std::copy(begin(), begin() + distance, new_vector.begin());
    std::copy(begin() + distance + 1, end(), new_vector.begin() + distance);
    new_vector.size_--;
    swap(new_vector);
  }

  void push_back(const_reference value) {
    if (size_ == capacity_) {
      size_type new_capacity = capacity_ == 0 ? 1 : capacity_ * 2;
      reserve(new_capacity);
    }
    pointer_vector_[size_++] = value;
  }

  void pop_back() { --size_; }
  //   reference operator[](size_type pos);	access specified element
  void swap(vector& other) {
    std::swap(size_, other.size_);
    std::swap(capacity_, other.capacity_);
    std::swap(pointer_vector_, other.pointer_vector_);
  }

 private:
  size_t size_;
  size_t capacity_;
  value_type* pointer_vector_;

  void RemoveVector() {
    delete[] pointer_vector_;
    pointer_vector_ = nullptr;
    // size_ = 0;
    // capacity_ = 0;
  }
};
}  // namespace s21
#endif  // SRC_S21_vector_H_