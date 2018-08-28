#include <list>

struct Stats {
  std::list<float> values;

  float max = 0;
  float min = 0;
  float calcAvg();

  void addValue(float value);
};
