#include <iostream>
#include <vector>

#include "s21_Vector.h"

// s21::Vector():
// size_type s21::Vector::get_size() { return size_; }

// typename s21::Vector<T>::size_type s21::Vector<T>::get_size() { return size_;
// }
using std::cout;
using std::endl;

int main() {
  //
  s21::Vector<int> vec{1, 2, 3, 4, 5};

  std::cout << "size: " << vec.get_size() << std::endl;
  std::cout << "capacity: " << vec.get_capacity() << std::endl;
  std::cout << "p_vector: " << vec.get_pointer() << endl;
  // vec[2] = 33;
  // for (int i = 0; i < 150; i++) {
  //   cout << vec[i] << endl;
  // }
  // for (size_t i = 0; i < vec.get_capacity(); i++) {
  // cout << *(vec.get_pointer()) << endl;

  // << vec.get_pointer() << std::endl;
  // cout << vec[0] << endl;
  // std::vector<int> vect;
  // std::cout << vect.capacity() << std::endl;

  // vec.value
  //

  std::vector<int> obame{6, 4, 7, 9, 9};
  cout << "capa " << obame.capacity() << endl;
  obame.at(4) = 55;
  cout << obame.size() << endl;
  for (auto var : obame) {
    cout << var << endl;
  }
  // cout << *obame.begin() << endl;
  // obame{1, 2};
  // cout << obame.at(43) << endl;
  // while (!obame.empty()) {
  //   int i = obame.size() - 1;
  //   std::cout << obame[i] << std::endl;
  //   i++;
  //   obame.pop_back();
  // }

  return 0;
}