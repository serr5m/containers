#include <iostream>
#include <vector>

#include "s21_Vector.h"

// s21::Vector():
// size_type s21::Vector::get_size() { return size_; }

// typename s21::Vector<T>::size_type s21::Vector<T>::get_size() { return size_;
// }

int main() {
  //
  s21::Vector<int> vec(43);
  std::cout << "aboba: " << vec.get_size() << std::endl;

  // std::vector<int> vect;
  // std::cout << vect.capacity() << std::endl;

  // vec.value
  //
  std::vector<int> obame = {1, 5, 8};

  // while (!obame.empty()) {
  //   int i = obame.size() - 1;
  //   std::cout << obame[i] << std::endl;
  //   i++;
  //   obame.pop_back();
  // }

  return 0;
}