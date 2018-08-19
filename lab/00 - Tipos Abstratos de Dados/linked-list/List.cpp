#include "List.hpp"

void List::insertNode (int data) {
  Node* aux = new Node;
  aux->data = data;
  aux->next = nullptr;

  if (head == nullptr) {
    head = aux;
  } else {
    tail->next = aux;
  }
  tail = aux;
}

void List::removeNode (int data) {
  Node *current = head;
  Node *previous = nullptr;

  while (current != nullptr) {
    if (current->data != data) {
      previous = current;
      current = current->next;
      continue;
    }

    if (previous == nullptr) { // head
      head = current->next;
    } else if (current->next == nullptr) { // tail
      previous->next = nullptr;
      tail = previous;
    } else {
      previous->next = current->next;
    }

    delete current;
  }
}

void List::display () {
  Node *current = head;

  while (current != nullptr) {
    cout << current->data << '\t';
    current = current->next;
  }

  cout << endl;
}
