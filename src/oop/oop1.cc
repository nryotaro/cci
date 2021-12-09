#include <bits/stdc++.h>
using namespace std;

class Suit {};
class Spade final : public Suit {};
class Heart final : public Suit {};
class Diamond final : public Suit {};
class Club final : public Suit {};

class Suits {
  public:
    vector<Suit> enumerate_suits() {
        return {Spade(), Heart(), Diamond(), Club()};
    }
};

class Card {
  public:
    virtual ~Card() {}
};
class Joker : public Card {};
class NumberCard : public Card {
  public:
    NumberCard(Suit suit, int number) : suit(suit), number(number) {}

  private:
    Suit suit;
    int number;
};

class Cards {
  public:
    Cards(vector<Card> cards) : cards(cards) {}

    Card draw_card() {
        Card card = cards.back();
        cards.pop_back();
        return card;
    }
    void back_card(Card card) { cards.push_back(card); }
    void shuffle() {
        std::random_device rd;
        std::mt19937 g(rd());
        std::shuffle(cards.begin(), cards.end(), g);
    }

  private:
    vector<Card> cards;
};

class BlackJackCards final : public Cards {
  public:
    BlackJackCards(int number_of_players, Cards cards)
        : number_of_players(number_of_players), Cards(cards) {}

    NumberCard draw(int player_id) {
        Card card = draw_card();
        Card &a = card;
        return dynamic_cast<NumberCard &>(a);
    }

  private:
    int number_of_players;
};

class CardsFactory final {
  public:
    Cards create_cards() {
        Cards cards = create_number_cards();
        cards.back_card(Joker());
        cards.back_card(Joker());
        return Cards(cards);
    }
    Cards create_number_cards() {
        vector<Card> cards;
        for(auto suit : Suits().enumerate_suits()) {
            for(int i = 1; i <= 13; i++) {
                cards.push_back(NumberCard(suit, i));
            }
        }
        return Cards(cards);
    }
};

class BalckJackCardsFactory {

    BlackJackCards create(int number_of_players) {
        Cards cards = CardsFactory().create_number_cards();
        return BlackJackCards(number_of_players, cards);
    }
};