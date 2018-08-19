#include "BST.hpp"

void insertNodeHelper (Node* parentNode, Node* newNode) {
  if (newNode->data < parentNode->data) {
    if (parentNode->left != nullptr) {
      return insertNodeHelper(parentNode->left, newNode);
    }
    parentNode->left = newNode;
  } else if (newNode->data > parentNode->data) {
    if (parentNode->right != nullptr) {
      return insertNodeHelper(parentNode->right, newNode);
    }
    parentNode->right = newNode;
  }
}

void BST::insertNode (int data) {
  Node* aux = new Node;
  aux->data = data;

  if (root == nullptr) {
    root = aux;
    return;
  }

  insertNodeHelper(root, aux);
}

void inorder (Node* node) {
  if (node == nullptr) return;

  inorder(node->left);
  cout << node->data << '\t';
  inorder(node->right);
}

void BST::display () {
  inorder(root);
  cout << endl;
}

bool nodeContains (Node* node, int data) {
  if (node == nullptr) return false;
  if (node->data == data) return true;
  if (data < node->data) {
    return nodeContains(node->left, data);
  }
  return nodeContains(node->right, data);
}

bool BST::contains (int data) {
  return nodeContains(root, data);
}
