#include "List.hpp"
#include "ListD.hpp"

int main (int argc, char const *argv[]) {
  ListD listaD;

  for (int i; i <= 40960000; i++) {
    listaD.insertNode(i);
  }
  listaD.removeNode(40960000);

  // listaD.display();

  cout << "Fim!" << endl;
  return 0;
}
