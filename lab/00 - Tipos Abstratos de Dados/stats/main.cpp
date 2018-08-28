#include <iostream>
#include <iterator>
#include <map>
#include <string>
#include "Stats.hpp"

using namespace std;

int main (int argc, char const *argv[]) {
  map <string, Stats*> statsMap;

  string key;
  float value;

  while (cin >> key >> value) {
    if (statsMap.find(key) == statsMap.end()) {
      statsMap[key] = new Stats;
    }
    statsMap[key]->addValue(value);
  }

  for (auto iter = statsMap.begin(); iter != statsMap.end(); iter++) {
    cout << iter->first << " ";
    for (auto iter2 = (iter->second)->values.begin(); iter2 != (iter->second)->values.end(); iter2++) {
      cout << (*iter2) << " ";
    }
    cout << "| " << (iter->second)->min;
    cout << " " << (iter->second)->max;
    cout << " " << (iter->second)->calcAvg() << endl;
  }

  return 0;
}
