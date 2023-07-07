#include "my_tree.h"

#include <iostream>

int main() {
  Tree<int> a;
  //   std::cout << a.root_ << std::endl;
  // a.add_element(1);
  // a.add_element(9);
  // a.add_element(8);
  // a.add_element(6);
  // a.add_element(5);
  // a.add_element(2);
  // a.add_element(3);

  if (!(true) && !(true)) {
    std::cout << " zashel" << std::endl;
  } else {
    std::cout << " ne zashel" << std::endl;
  }
  std::cout << a.root_->key << std::endl;
  // std::cout << a.root_->left->key << std::endl;
  std::cout << a.root_->right->key << std::endl;
  // std::cout << a.root_->right->left->key << std::endl;
  //   a.add_to_left(3);
  //   a.add_to_left(4);
  a.remove_tree();
  return 0;
}