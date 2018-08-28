#include <iostream>
#include <iterator>
#include <map>
#include <string>
#include <iomanip>

using namespace std;

int main (int argc, char const *argv[]) {
  map <string, int> wordMap;
  int total = 0;
  string word;

  while (cin >> word) {
    if (word[0] > 64 && word[0] < 91) {
      word[0] = word[0] + 32;
    }
    wordMap[word]++;
    total++;
  }

  for (auto item = wordMap.begin(); item != wordMap.end(); item++) {
    cout << item->first << " " << item->second;
    cout << ' ' << fixed << setprecision(2) << setfill('0') << ((float)(item->second) / (float)total);
    cout << endl;
  }
  return 0;
}
