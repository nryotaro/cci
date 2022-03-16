#include <bits/stdc++.h>
using namespace std;

pair<int, int> solve(string prediction, string answer) {
  int hit = 0;
  unordered_map<char, int> prediction_blow, answer_blow;
  for (int i = 0; i < 4; i++) {
    if (prediction[i] == answer[i]) {
      hit++;
    } else {
      prediction_blow[prediction[i]]++;
      answer_blow[answer[i]]++;
    }
  }
  int blow = 0;
  for (char color : {'R', 'Y', 'G', 'B'}) {
    blow += min(prediction_blow[color], answer_blow[color]);
  }
  return {hit, blow};
}

// int main() {
//   string prediction = "GGRR";
//   string answer ="RGBY";
//   pair<int, int> res = solve(prediction, answer);
//   cout << "hit: " << res.first << ", blow: " << res.second << endl;
//   return 0;
// }
