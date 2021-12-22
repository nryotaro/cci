#include "inter2.h"
using namespace std;

WordFrequency::WordFrequency(unordered_map<string, int> frequency)
    : frequency(frequency){

      };

int WordFrequency::lookUpFrequency(string word) { return frequency[word]; }

WordFrequency WordFrequencyFactory::create(string text) {
  unordered_map<string, int> frequency;
  string word;
  unordered_set<char> ignore = {'\n', '\r', '\t', '.', ' '};
  for (char c : text) {
    if (ignore.find(c) == ignore.end()) {
      word.push_back(c);
    } else {
      if ((int)word.size() > 0) {
        frequency[word]++;
        word = "";
      }
    }
  }
  if ((int)word.size() > 0)
    frequency[word]++;
  return WordFrequency(frequency);
}
