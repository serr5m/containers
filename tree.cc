#include "tree.h"

#include <iostream>

// #include "s21_vector.h"
int main() {
  //
  //
  Tree<int> a;
  a.add_to_left(4);
  a.add_to_left(5);
  std::cout << (a.root_.left->key) << std::endl;
  std::cout << ((a.root_.left)->left->key) << std::endl;
  //   s21::vector<int> aboba{1, 2, 3, 4, 5};
  return 0;
}