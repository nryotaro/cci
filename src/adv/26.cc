#include <bits/stdc++.h>
using namespace std;

struct Pair {
  int a, b;

  Pair(int first, int second) : a(min(first, second)), b(max(first, second)) {}

  bool operator==(const Pair &other) const {
    return a == other.a && b == other.b;
  }

  struct PairHash {
    size_t operator()(const Pair &p) const {
      return hash<int>()(p.a) ^ hash<int>()(p.b);
    }
  };
};

unordered_map<Pair, double, Pair::PairHash>
solve(unordered_map<int, vector<int>> docs) {

  unordered_map<int, vector<int>> word_to_docs;
  for (pair<int, vector<int>> doc_to_words : docs) {
    int doc = doc_to_words.first;
    for (int word : doc_to_words.second) {
      word_to_docs[word].push_back(doc);
    }
  }
  unordered_map<Pair, double, Pair::PairHash> results;

  for (pair<int, vector<int>> p : word_to_docs) {
    vector<int> documents = p.second;
    int n = static_cast<int>(documents.size());
    for (int i = 0; i < n; i++) {
      for (int j = i + 1; j < n; j++) {

        int doc_a = documents[i];
        int doc_b = documents[j];
        Pair key(doc_a, doc_b);

        if (results.find(key) == results.end()) {

          unordered_set<int> inter(docs[doc_a].begin(), docs[doc_a].end());
          unordered_set<int> uni(docs[doc_a].begin(), docs[doc_a].end());
          int inter_num = 0;
          for (int word : docs[doc_b]) {
            uni.insert(word);
            if (inter.find(word) != inter.end())
              inter_num++;
          }
          results[key] = (double)inter_num / (double)uni.size();
        }
      }
    }
  }

  return results;
}

// int main() {
//   unordered_map<int, vector<int>> docs;
//   docs[13] = {14, 15, 100, 9, 3};
//   docs[16] = {32, 1, 9, 3, 5};
//   docs[19] = {15, 29, 2, 6, 8, 7};
//   docs[24] = {7, 10};

//   unordered_map<Pair, double, Pair::PairHash> results = solve(docs);
//   for(pair<Pair, double> result: results) {
//     Pair p = result.first;
//     cout << p.a << "," << p.b << "->" << result.second << endl;
//   }

//   return 0;
// }
