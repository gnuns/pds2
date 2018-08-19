#include <iostream>

using namespace std;

struct NodeD {
  int   data;
  NodeD* next;
  NodeD* prev;
};

struct ListD {
  NodeD* head = nullptr;
  NodeD* tail = nullptr;

  void insertNode(int data);
  void removeNode(int data);
  void display();
};
