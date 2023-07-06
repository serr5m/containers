#ifndef SRC_TREE_H_
#define SRC_TREE_H_

#include <iostream>

template <typename T>
class Tree {
  // template <typename T>
 public:
  typedef struct node {
    T key;
    // unsigned char height;
    node* parent_;
    node* left_;
    node* right_;

    node(T k = T(), node* parent = nullptr, node* left = nullptr,
         node* right = nullptr)
        : key(k), parent_(parent), left_(left), right_(right) {
      std::cout << "k " << k << std::endl;
    }
  } node;
  // 1,2,4,8,9,5,10,3,6,7.

  Tree() : root_(node()) {}

  void add_to_left(int value) {
    node* tmp = &root_;
    while (tmp->left_ != nullptr) {
      tmp = tmp->left_;
    }
    node* node_a = new node(value, tmp, nullptr, nullptr);
    // node_a.parent = tmp;
    tmp->left_ = node_a;  //
  }

  node root_;  // корень, начало дерева. поле класса дерево

  //
};
#endif  // SRC_TREE_H_