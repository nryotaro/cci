#include "adv2.h"
#include <bits/stdc++.h>
using namespace std;

Card::Card(int num, Suit suit) : num(num), suit(suit) {}

string Card::to_string() const {
  string res;
  string suit_str;
  if(suit == Suit::Spade)
    suit_str = "spade";
  if(suit == Suit::Club)
    suit_str = "club";
  if(suit == Suit::Heart)
    suit_str = "heart";
  if(suit == Suit::Diamond)
    suit_str = "diamond";

  res.append(suit_str);
  res.push_back(' ');
  res.append(std::to_string(num));
  return res;
}

Card CardFactory::create(int id) {
  assert(0 <= id && id <= 51);
  if (id < 13)
    return Card(id + 1, Suit::Spade);
  if (id < 26)
    return Card(id - 13 + 1, Suit::Club);
  if (id < 39)
    return Card(id - 26 + 1, Suit::Heart);
  else
    return Card(id - 39 + 1, Suit::Diamond);
}


ostream& operator<<(ostream& os, const Card& card) {
  os<< card.to_string();
  return os;
}

vector<Card> solve() {
  unordered_set<int> ids;
  for (int i = 0; i < 52; i++)
    ids.insert(i);

  CardFactory factory;
  vector<Card> res;

  random_device seed_gen;
  mt19937 engine(seed_gen());
  for (int i = 0; i < 52; i++) {
    uniform_real_distribution<> dist(0, 52 - i);
    int pos = dist(engine);
    auto iter = next(ids.begin(), pos);
    res.push_back(factory.create(*iter));
    ids.erase(iter);
  }

  return res;
}
