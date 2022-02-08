#include <bits/stdc++.h>
using namespace std;

class BitFlag {
public:
  BitFlag(int n);

  void set(int i, bool t);
  bool get(int i);

private:
  vector<int> flags;
};

BitFlag::BitFlag(int n) : flags(n / 8 + 1) {}

void BitFlag::set(int i, bool t) {
  if (t) {
    flags[i / 8] |= 1 << (i % 8);
  } else {
    int v = ~(1 << (i % 8));
    flags[i / 8] &= v;
  }
}

bool BitFlag::get(int i) { return flags[i / 8] & (1 << (i % 8)); }
