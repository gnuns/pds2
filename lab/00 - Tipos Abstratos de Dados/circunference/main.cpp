#include <list>
#include <iterator>
#include "Circunferencia.hpp"
using namespace std;

int main (int argc, char const *argv[]) {
  list <Circunferencia> circunferencias;
  int id, centroX, centroY, raio;
  Circunferencia* c;

  while (cin >> id) {
    cin >> centroX;
    cin >> centroY;
    cin >> raio;

    c = new Circunferencia(id, centroX, centroY, raio);

    circunferencias.push_back(*c);
  }

  for (auto iter = circunferencias.begin(); iter != circunferencias.end(); iter++) {
    cout << iter->id;
    for (auto iter2 = circunferencias.begin(); iter2 != circunferencias.end(); iter2++) {
        if (iter2->id == iter->id) continue;
        if (iter->temIntercecao(*(iter2))) {
          cout << " " << iter2->id;
        }
    }
    cout << endl;
  }
  return 0;
}
