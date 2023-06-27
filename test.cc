#include <array>
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
  std::array<int, 5> ar{{1, 2, 3}};
  for (auto i : ar) {
    cout << i << endl;
  }
  // s21::vector<int> aboba{1, 2, 3, 4, 5, 6, 7, 8, 9};
  // cout << "before size " << aboba.size() << endl;
  // cout << "before capa " << aboba.size() << endl;
  // s21::vector<int>::iterator poso = aboba.begin() + 3;

  // aboba.erase(poso);
  // cout << "after size " << aboba.size() << endl;
  // cout << "after capa " << aboba.size() << endl;
  // for (int i = 0; i < aboba.size(); ++i) {
  //   cout << aboba[i] << endl;
  // }

  // int dist = std::distance(aboba.begin(), poso);
  // // cout << "dist " << dist << endl;
  // auto it = aboba.insert(poso, 77);
  // cout << "it " << *it << endl;
  // cout << "capa " << aboba.capacity() << endl;
  // cout << "size " << aboba.size() << endl;
  // cout << "---------------" << endl;

  // std::vector<int> papa{1, 2, 3, 4, 5, 6, 7, 8, 9};
  // cout << "before size " << papa.size() << endl;
  // cout << "before capa " << papa.size() << endl;
  // auto pos = papa.begin() + 3;
  // papa.erase(pos);
  // for (int i = 0; i < papa.size(); ++i) {
  //   cout << papa[i] << endl;
  // }
  // cout << "after size " << papa.size() << endl;
  // cout << "after capa " << papa.size() << endl;

  // auto it1 = papa.insert(papa.begin() + 3, 88);
  // papa.erase(papa.begin() + 4);
  // // cout << "it " << *it1 << endl;
  // cout << "capa " << papa.capacity() << endl;
  // cout << "size " << papa.size() << endl;
  // cout << "---------------" << endl;
  // papa.push_back(3);

  // cout << "capa " << papa.capacity() << endl;
  // cout << "size " << papa.size() << endl;
  // for (int i = 0; i < papa.size(); ++i) {
  //   cout << papa[i] << endl;
  // }

  // s21::Vector<int> test{1, 2, 3};

  // s21::Vector<int> test{4, 5, 6, 7, 8};
  // int a = std::distance(test.begin(), test.end());
  // cout << a << endl;

  // std::cout << "p_vector: " << vec1.get_pointer() << endl;
  // // vec[2] = 33;`

  // std::vector<int> abobab{1, 3, 4};
  // abobab.insert(abobab.begin() + 2, 777);
  // abobab.insert(abobab.begin() + 2, 777);
  // std::cout << abobab.size() << endl;
  // std::cout << abobab.capacity() << endl;

  // for (size_t i = 0; i < aboba.get_capacity(); ++i) {
  // //   cout << aboba.at(i) << endl;
  // // }
  // // cout << aboba.get_capacity() << endl;
  // aboba.reserve(13);
  // // cout << aboba.get_capacity() << endl;
  // // cout << aboba.get_size() << endl;
  // for (size_t i = 0; i < aboba.get_capacity(); ++i) {
  //   cout << aboba[i] << endl;
  // }

  // std::vector<int> obame{1, 2, 3, 4, 5, 6, 7};
  // obame.push_back(1);
  // obame.insert(obame.begin() + 2, {88, 99, 0});
  // s21::Vector<int>::iterator my_it = a.begin();
  // s21::Vector<int>::iterator pos = (obame.begin() + 2);
  // // std::vector<int> emabo{3, 2, 1, 0, -1};
  // // obame.swap(obame);
  // for (size_t i = 0; i < obame.size(); ++i) {
  //   cout << obame.at(i) << endl;
  // }

  // obame.push_back(7);
  // cout << "std capa " << §.capacity() << endl;

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