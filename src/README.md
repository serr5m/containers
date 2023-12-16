# Containers Library

## Overview

Welcome to the Containers library! This C++ library provides a set of classical container classes to facilitate data storage and manipulation. The library includes the following containers:

- **list**: Implemented using a linked list structure.
- **map**: Associative container that stores key-value pairs.
- **queue**: A basic implementation of a queue.
- **set**: Container that stores unique elements in a sorted order.
- **stack**: A basic implementation of a stack.
- **vector**: Dynamic array that automatically adjusts its size.

## File Structure

- **containers.h**: The main header file that includes the implementations of all container classes.
- **list.h**: Implementation of the linked list-based list container.
- **map.h**: Implementation of the map container.
- **queue.h**: Implementation of the queue container.
- **set.h**: Implementation of the set container.
- **stack.h**: Implementation of the stack container.
- **vector.h**: Implementation of the dynamic array-based vector container.
- **Makefile**: Makefile for building and testing the library.

## Usage

### 1. Include the Library

```cpp
#include "containers.h"


list<int> my_list;
map<std::string, int> my_map;
queue<double> my_queue;
set<char> my_set;
stack<float> my_stack;
vector<int> my_vector;

// Example with a list
my_list.push_back(42);
my_list.push_front(7);

// Example with a map
my_map["apple"] = 5;
my_map["banana"] = 3;

// Example with a vector
my_vector.push_back(10);
my_vector.push_back(20);
