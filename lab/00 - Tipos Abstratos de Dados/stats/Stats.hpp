#include <list>
#include <climits>

struct Stats {
  std::list<float> values;

  float max = -1;
  float min = INT_MAX;
  float calcAvg();

  void addValue(float value);
};
