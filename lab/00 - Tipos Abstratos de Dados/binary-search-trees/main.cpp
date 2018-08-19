#include "BST.hpp"

int main (int argc, char const *argv[]) {
  BST tree;

  tree.insertNode(480);
  tree.insertNode(920);
  tree.insertNode(55);
  tree.insertNode(99);
  tree.insertNode(9);
  tree.insertNode(17);
  tree.insertNode(18);
  tree.insertNode(3);

  tree.display();

  cout << tree.contains(8) << endl;
  cout << tree.contains(18) << endl;
  cout << tree.contains(920) << endl;
  cout << tree.contains(10) << endl;

  cout << "Fim!" << endl;
  return 0;
}
