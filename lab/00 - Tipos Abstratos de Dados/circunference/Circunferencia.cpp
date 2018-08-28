#include "Circunferencia.hpp"
#include <math.h>

double distanciaEntrePontos (Ponto a, Ponto b) {
  return sqrt(pow(b.x - a.x, 2.0) + pow(b.y - a.y, 2.0));
}

Ponto::Ponto (int _x, int _y) {
  x = _x;
  y = _y;
}

Circunferencia::Circunferencia (int _id, int _x, int _y, int _raio) {
  id = _id;
  centro = new Ponto(_x, _y);
  raio = _raio;
}

bool Circunferencia::temIntercecao (Circunferencia c) {
  return distanciaEntrePontos(*centro, *(c.centro)) <= (c.raio + raio);
}
