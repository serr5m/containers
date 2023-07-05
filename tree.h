#ifndef SRC_TREE_H_
#define SRC_TREE_H_

template <typename T>
class Tree {
  // template <typename T>
 public:
  typedef struct node {
    T key;
    // unsigned char height;
    node* parent;
    node* left;
    node* right;

      node(T k = T(), node* parent = nullptr, node* left = nullptr,
         node* right = nullptr)
        : key(k), parent(parent), left(left), right(right) {}
  } node;

  Tree() : root_(node()) {}

  void add_to_left(int value) {
    node* tmp = &root_;
    while (tmp->left != nullptr) {
      tmp = tmp->left;
    }
    node* node_a = new node(value, tmp, nullptr, nullptr);
    // node_a.parent = tmp;
    tmp->left = node_a;  //
  }
  node root_;

  //
};
#endif  // SRC_TREE_H_