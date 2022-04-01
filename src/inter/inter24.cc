#include <bits/stdc++.h>
using namespace std;

class LRUCache final {
public:
  LRUCache(int size) : size(size), counter(0) {}
  void put(int key, string value) {
    if (cache.find(key) == cache.end()) {
      if (cache.size() == size) {
        pair<int, int> tk = *time_key.begin();
        cout << " full " << tk.second << endl;
        cache.erase(tk.second);
        time_key.erase(tk.first);
      }
    } else {
      int time = cache[key].second;
      time_key.erase(time);
    }
    cache[key] = {value, counter};
    time_key[counter] = key;
    counter++;
  }
  optional<string> get(int key) {
    cout << "get key " << key << endl;
    if (cache.find(key) == cache.end()) {
      cout << "nothing" << endl;
      return nullopt;
    }
    string value = cache[key].first;
    int time = cache[key].second;
    cout << key << " "
         << " erase: " << time << endl;
    time_key.erase(time);
    time_key[counter++] = key;
    return value;
  }

private:
  int size;
  int counter;
  // key -> (value, time_counter)
  unordered_map<int, pair<string, int>> cache;
  // time_counter -> key
  map<int, int> time_key;
};

// int main() {
//   LRUCache cache(4);
//   cache.put(1, "hoge");
//   cache.put(2, "bar");
//   cache.put(3, "dd");
//   cache.put(4, "aa");
//   cout << cache.get(1).value() << endl;
//   cache.put(5, "doge");
//   cout << cache.get(2).value() << endl;
//   return 0;
// }
