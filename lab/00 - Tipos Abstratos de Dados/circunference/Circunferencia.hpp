#include <iostream>

using namespace std;


struct Ponto {
  int   x;
  int   y;
  Ponto (int _x, int _y);
};

struct Circunferencia {
  int   id;
  int   raio;
  Ponto* centro = nullptr;

  bool temIntercecao(Circunferencia c);
  Circunferencia (int _id, int _x, int _y, int _raio);
};
