#include <iostream>

using namespace std;

struct Node {
  int data;
  Node* left;
  Node* right;
};

struct BST {
  Node* root = nullptr;

  void insertNode(int data);
  void removeNode(int data);
  bool contains(int data);
  void display();
};
