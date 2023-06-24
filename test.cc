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
  s21::Vector<int> test;
  test.push_back(4);
  test.push_back(6);
  std::cout << "capacity: " << test.capacity() << std::endl;
  // std::cout << "p_vector: " << vec1.get_pointer() << endl;
  // // vec[2] = 33;`
  for (int i = 0; i < test.size(); ++i) {
    cout << test[i] << endl;
  }

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
  // s21::Vector<long int> aboba{1, 2, 3, 4, 5};
  // aboba[4] = 34;
  // // for (size_t i = 0; i < aboba.get_capacity(); ++i) {
  // //   cout << aboba.at(i) << endl;
  // // }
  // // cout << aboba.get_capacity() << endl;
  // aboba.reserve(13);
  // // cout << aboba.get_capacity() << endl;
  // // cout << aboba.get_size() << endl;
  // for (size_t i = 0; i < aboba.get_capacity(); ++i) {
  //   cout << aboba[i] << endl;
  // }

  // std::vector<long int> obame;
  // // obame.push_back(7);
  // for (size_t i = 0; i < obame.size(); ++i) {
  //   cout << obame.at(i) << endl;
  // }
  // obame.push_back(7);
  // cout << "std capa " << obame.capacity() << endl;

  // s21::Vector<long int> aboba(12);
  // // obame.push_back(7);
  // aboba[0] = 45;
  // for (size_t i = 0; i < aboba.size(); ++i) {
  //   cout << aboba.at(i) << endl;
  // }
  // aboba.shrink_to_fit();
  // cout << "capa " << aboba.capacity() << endl;

  // cout << obame.size() << endl;
  // cout << obame.capacity() << endl;

  // for (auto item : obame) {
  //   cout << item << endl;
  // }
  // obame.reserve(44);
  // cout << obame.capacity() << endl;

  // obame.push_back(2);
  // // obame.push_back(1);
  // obame.reserve(19);
  // cout << obame.capacity() << endl;

  // cout << aboba.max_size() << endl;
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