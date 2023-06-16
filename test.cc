#include <iostream>
#include <vector>

#include "s21_Vector.h"

int main() {
  //
  Vector<int> vec;
  std::cout << "aboba:  vec.aboba" << std::endl;
  // vec.value
  //
  std::vector<int> obame = {1, 5, 8};

  while (!obame.empty()) {
    int i = obame.size() - 1;
    std::cout << obame[i] << std::endl;
    i++;
    obame.pop_back();
  }

  return 0;
}