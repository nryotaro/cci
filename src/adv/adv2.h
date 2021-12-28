#include<vector>
#include<iostream>
#include<string>
enum class Suit { Spade, Diamond, Club, Heart };

class Card final {
 public:
 Card(int num, Suit suit);
 std::string to_string() const;
 private:
  int num;
  Suit suit;
};

class CardFactory final {
 public:
  Card create(int id);
};

std::ostream& operator<<(std::ostream& os, const Card& card);

std::vector<Card> solve();
