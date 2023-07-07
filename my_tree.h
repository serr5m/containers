#ifndef SRC_MY_TREE_H_
#define SRC_MY_TREE_H_

template <typename T>
class Tree {
 public:
  Tree() {}
  ~Tree() {
    delete root_->left;
    delete root_->right;
    delete root_->parent;
    delete root_;
  }

  typedef struct node {
    T key;
    node* parent;
    node* left;
    node* right;

    node() {
      key = 0;
      parent = nullptr;
      left = nullptr;
      right = nullptr;
    }

    node(T k) : key(k), parent(nullptr), left(nullptr), right(nullptr) {}
    // ~node() {
    //   if
    // }

  } node;

  void add_element(T value) {
    node* tmp = root_;
    if (tmp) {
      bool was_find = 0;
      while (!was_find) {
        if (value < tmp->key) {
          if (tmp->left) {
            tmp = tmp->left;
          } else {
            node* new_node = new node(value);
            new_node->parent = tmp;
            tmp->left = new_node;
            was_find = 1;
          }
        } else {
          if (tmp->right) {
            tmp = tmp->right;
          } else {
            node* new_node = new node(value);
            new_node->parent = tmp;
            tmp->right = new_node;
            was_find = 1;
          }
        }
      }
    } else {
      node* new_node = new node(value);
      root_ = new_node;
    }
  }

  node* find_node(T key) {
    node* tmp = root_;
    bool was_find = 0;
    while (!was_find) {
      if ((tmp->left == nullptr) && (tmp->right == nullptr)) {
        break;
      }

      if (key < root_->key) {
        tmp = tmp->left;
      } else {
        tmp = tmp->right;
      }
    }
  }
  void remove_tree() {
    if (root_) {
      delete root_->left;
      delete root_->right;
      delete root_->parent;
      delete root_;
    }
  }
  node* root_ = nullptr;
};

#endif  // SRC_MY_TREE_H_