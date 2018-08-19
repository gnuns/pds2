#include "List.hpp"

int main (int argc, char const *argv[]) {
  List lista;
  lista.insertNode(10);
  lista.insertNode(11);
  lista.insertNode(12);
  lista.insertNode(242);
  lista.insertNode(12);
  lista.removeNode(11);
  lista.insertNode(11);
  lista.display();
  cout << "Fim!" << endl;
  return 0;
}
