#include <bits/stdc++.h>
using namespace std;

enum class Suit { Spade, Heart, Diamond, Club };

class Suits {
  public:
    vector<Suit> enumerate_suits() {
        return {Suit::Spade, Suit::Heart, Suit::Diamond, Suit::Club};
    }
};

enum class CardType { Joker, Number };

class Card {
  public:
    virtual CardType get_card_type();
};

class Joker : public Card {
    CardType get_card_type() { return CardType::Joker; }
};

class NumberCard : public Card {
  public:
    NumberCard(Suit suit, int number) : suit(suit), number(number) {}

    virtual CardType get_card_type() { CardType::Number; }

    int get_number() { return number; }

  private:
    Suit suit;
    int number;
};

class Cards {
  public:
    Cards(vector<Joker> jokers, vector<NumberCard> numberCards,
          vector<CardType> cardTypes)
        : cardTypes(cardTypes), jokers(jokers), numberCards(numberCards) {}

    Card draw_card() {
        CardType cardType = cardTypes.back();
        cardTypes.pop_back();
        if(cardType == CardType::Joker) {
            Card card = jokers.back();
            jokers.pop_back();
            return card;
        } else {
            Card card = numberCards.back();
            numberCards.pop_back();
            return card;
        }
    }

    NumberCard draw_number_card() {
        if(numberCards.size() > 0) {
            NumberCard card = numberCards.back();
            stack<CardType> stk;
            while(cardTypes.back() == CardType::Joker) {
                stk.push(cardTypes.back());
                cardTypes.pop_back();
            }
            cardTypes.pop_back();
            while(!stk.empty()) {
                cardTypes.push_back(stk.top());
                stk.pop();
            }
            return card;
        } else {
            throw runtime_error("error");
        }
    }
    void back_card(NumberCard card) {
        cardTypes.push_back(CardType::Number);
        numberCards.push_back(card);
    }
    void back_card(Joker card) {
        cardTypes.push_back(CardType::Joker);
        jokers.push_back(card);
    }

    void shuffle() {
        std::random_device rd;
        std::mt19937 g(rd());
        std::shuffle(numberCards.begin(), numberCards.end(), g);
        std::shuffle(cardTypes.begin(), cardTypes.end(), g);
    }

    int clac_numeric_card_sum() {
        int sum = 0;
        for(auto card : numberCards) {
            sum += card.get_number();
        }
        return sum;
    }

  private:
    vector<CardType> cardTypes;
    vector<Joker> jokers;
    vector<NumberCard> numberCards;
};

class Player final {
  public:
    Player(Cards cards) : cards(cards) {}

    int add_card(NumberCard card) { cards.back_card(card); }

    int check_status() {
        int sum = cards.clac_numeric_card_sum();
        return sum;
    }

  private:
    Cards cards;
};

class BlackJackCards final : public Cards {
  public:
    BlackJackCards(vector<Player> players, vector<Joker> jokers,
                   vector<NumberCard> numberCards, vector<CardType> cardTypes)
        : Cards(jokers, numberCards, cardTypes), players(players), turn(0) {}

    void skip() { turn = (turn + 1) % (int)players.size(); }

    void draw() {
        NumberCard numberCard = draw_number_card();
        players[turn].add_card(numberCard);
        skip();
    }

    vector<Player> status() {
        vector<Player> vectorWinnerPlayers(players.begin(), players.end());
    }

  private:
    int turn;
    vector<Player> players;
};

class CardsFactory final {
  public:
    Cards empty() { return Cards({}, {}, {}); }
};

class BlackJackCardsFactory final {

  public:
    BlackJackCards create(int num_of_players) {
        CardsFactory factory = CardsFactory();
        vector<Player> players;
        for(int i = 0; i < num_of_players; i++) {
            players.push_back(Player(factory.empty()));
        }
        vector<NumberCard> cards;
        vector<CardType> cardTypes;
        for(auto suit : Suits().enumerate_suits()) {
            for(int i = 1; i <= 13; i++) {
                cards.push_back(NumberCard(suit, i));
                cardTypes.push_back(CardType::Number);
            }
        }
        BlackJackCards res = BlackJackCards(players, {}, cards, cardTypes);
        res.shuffle();
        return res;
    }
};