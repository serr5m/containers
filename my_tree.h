#ifndef SRC_MY_TREE_H_
#define SRC_MY_TREE_H_
#include <iostream>

template <typename T>
class Tree {
 public:
  Tree() { root_ = new node(); }

  Tree(T k) { root_ = new node(k); }

  ~Tree() {
    // delete root_->left;
    // delete root_->right;
    // delete root_->parent;
    // delete root_;
  }
  typedef struct node {
    T key;
    node* parent;
    node* left;
    node* right;

    node() {
      // std::cout << "def " << std::endl;
      key = 0;
      parent = nullptr;
      left = nullptr;
      right = nullptr;
    }

    node(T k) : key(k), parent(nullptr), left(nullptr), right(nullptr) {
      // std::cout << "param " << std::endl;
    }
    // ~node() {
    //   if
    // }

  } node;

  void insert_elem(T k) {
    node* curr = root_;
    while (curr && curr->key != k) {
      if (curr->key > k && curr->left == nullptr) {
        curr->left = new node(k);
      } else if (curr->key < k && curr->right == nullptr) {
        curr->right = new node(k);
      } else if (curr->key > k && curr->left != nullptr) {
        curr = curr->left;
      } else {
        curr = curr->right;
      }
    }
  }

  // void add_element(T value) {
  //   node* curr = root_;
  //   if (curr) {
  //     bool was_find = 0;
  //     while (!was_find) {
  //       if (value < curr->key) {
  //         if (curr->left) {
  //           curr = curr->left;
  //         } else {
  //           node* new_node = new node(value);
  //           new_node->parent = curr;
  //           curr->left = new_node;
  //           was_find = 1;
  //         }
  //       } else {
  //         if (curr->right) {
  //           curr = curr->right;
  //         } else {
  //           node* new_node = new node(value);
  //           new_node->parent = curr;
  //           curr->right = new_node;
  //           was_find = 1;
  //         }
  //       }
  //     }
  //   } else {
  //     node* new_node = new node(value);
  //     root_ = new_node;
  //   }
  // }

  bool find_node(T k) {
    node* curr = root_;
    while (curr && curr->key != k) {
      if (curr->key > k) {
        curr = curr->left;
      } else {
        curr = curr->right;
      }
    }
    return curr != nullptr;
  }

  void remove_tree() {
    if (root_) {
      delete root_->left;
      delete root_->right;
      delete root_->parent;
      delete root_;
    }
  }
  node* root_ = nullptr;  // variable of the class Tree
};

#endif  // SRC_MY_TREE_H_