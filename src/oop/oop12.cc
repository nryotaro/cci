#include <bits/stdc++.h>
using namespace std;

template <typename T> class HashTable final {
public:
  HashTable(int n) : table(n){};
  void put(T v) {
    int index = calculate_hash(v);
    table[index].push_back(v);
  }
  bool exist(T v) {
    int index = calculate_hash(v);
    for (T &e : table[index])
      if (e == v)
        return true;
    return false;
  }
  void del(T v) {
    int index = calculate_hash(v);
    auto iter = table[index].begin();
    while (iter != table[index].end()) {
      if (*iter == v) {
        table[index].erase(iter);
        return;
      }
      iter++;
    }
  }

private:
  vector<list<T>> table;
  int calculate_hash(T v) {
    int hash_value = static_cast<int>(hash<T>()(v));
    return abs(hash_value) % table.size();
  }
};

// int main() {
//   HashTable<int> sut(5);
//   sut.put(1);
//   cout << sut.exist(1) << endl;
//   sut.del(1);
//   cout << sut.exist(1) <<  endl;
//   return 0;
// }
