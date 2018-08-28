#include <math.h>
#include <numeric>
#include "Stats.hpp"

void Stats::addValue(float value) {
  if (max == 0 || value < min) min = value;
  if (value > max) max = value;

  values.push_back(value);
}

float Stats::calcAvg() {
  float sum = std::accumulate(values.begin(), values.end(), 0.0);
  return round((sum / values.size()) * 100) / 100;
}
