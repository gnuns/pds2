#include <iostream>
#include <iterator>
#include <map>
#include <string>
#include <iomanip>
#include "Stats.hpp"

using namespace std;

void printValue (float value) {
  cout << ' ' << fixed << setprecision(2) << setfill('0') << value;
}

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
    cout << iter->first;
    for (auto listItem = (iter->second)->values.begin(); listItem != (iter->second)->values.end(); listItem++) {
      printValue(*listItem);
    }
    cout << " |";
    printValue((iter->second)->min);
    printValue((iter->second)->max);
    printValue((iter->second)->calcAvg());
    cout << endl;
  }

  return 0;
}
