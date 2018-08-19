#include "ListD.hpp"

void ListD::insertNode (int data) {
  NodeD* n = new NodeD;
  n->data = data;
  n->next = nullptr;
  n->prev = tail;

  if (head == nullptr) {
    head = n;
  } else {
    tail->next = n;
  }
  tail = n;
}

void ListD::removeNode (int data) {
  NodeD* current = head;

  if (tail->data == data) {
    current = tail;
  }

  while (current != nullptr) {
    if (current->data != data) {
      current = current->next;
      continue;
    }

    current->prev->next = current->next;
    delete current;
  }
}

void ListD::display () {
  NodeD* current = head;

  while (current != nullptr) {
    cout << current->data << '\t';
    current = current->next;
  }

  cout << endl;
}
