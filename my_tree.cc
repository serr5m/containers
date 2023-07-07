#include "my_tree.h"

#include <iostream>

int main() {
  Tree<int> a(9);

  a.insert_elem(7);
  a.insert_elem(13);
  a.insert_elem(21);
  a.insert_elem(3);
  a.insert_elem(8);
  a.insert_elem(6);
  a.insert_elem(13);

  // a.add_element(7);
  // a.add_element(13);
  // a.add_element(21);
  // a.add_element(3);
  // a.add_element(8);
  std::cout << a.root_->left->right->key << std::endl;

  // bool res_find = a.find_node(8);
  // std::cout << res_find << std::endl;
  // a.add_element(2);
  // a.add_element(3);

  // if (!(true) && !(true)) {
  //   std::cout << " zashel" << std::endl;
  // } else {
  //   std::cout << " ne zashel" << std::endl;
  // }
  // std::cout << a.root_->key << std::endl;
  // // std::cout << a.root_->left->key << std::endl;
  // std::cout << a.root_->right->key << std::endl;
  // std::cout << a.root_->right->left->key << std::endl;
  //   a.add_to_left(3);
  //   a.add_to_left(4);
  return 0;
}