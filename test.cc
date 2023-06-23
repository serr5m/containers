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
  s21::Vector<int> vec{123};
  // cout << *vec.begin() << endl;
  // cout << *(vec.end() - 1) << endl;
  cout << vec.empty() << endl;
  // // int a = vec.front();
  // cout << vec.front() << endl;
  // cout << *(vec.data() + 7) << endl;
  // // int s = vec.back();
  // cout << s << endl;
  // int x = 100;
  // x = static_cast<int>(x / 2.5);
  // cout << x << endl;
  // cout << vec.at(-1) << endl;
  // s21::Vector<int> vec1{1, 4, 5};
  // vec1 = std::move(vec);

  // std::cout << "size: " << vec1.get_size() << std::endl;
  // std::cout << "capacity: " << vec1.get_capacity() << std::endl;
  // std::cout << "p_vector: " << vec1.get_pointer() << endl;
  // // vec[2] = 33;`
  // for (int i = 0; i < vec1.get_size(); i++) {
  //   cout << vec1[i] << endl;
  // }

  // for (int i = 0; i < vec1.get_size(); i++) {
  //   cout << vec1[i] << endl;
  // }
  // for (size_t i = 0; i < vec.get_capacity(); i++) {
  // cout << *(vec.get_pointer()) << endl;

  // << vec.get_pointer() << std::endl;
  // cout << vec[0] << endl;
  // std::vector<int> vect;
  // std::cout << vect.capacity() << std::endl;

  // vec.value
  //

  std::vector<int> obame{2};
  cout << obame.empty() << endl;
  // obame.begin();

  // cout << obame.at(-1) << endl;
  // std::vector<int> aboba(obame);

  // // cout << "capa " << obame.capacity() << endl;
  // // obame.at(4) = 55;
  // // cout << obame.size() << endl;
  // for (auto var : obame) {
  //   cout << var << endl;
  // }
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