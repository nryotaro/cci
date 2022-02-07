#include <bits/stdc++.h>
using namespace std;

enum class Square { White, Black, None };

class Othello final {
public:
  Othello(int n, bool is_white_turn);

  void displayGrid();
  bool isGameOver();
  void placeStone(int row, int column) {}

private:
  vector<vector<Square>> grid;
  bool isWhiteTurn;
};

Othello::Othello(int n, bool isWhiteTurn) : isWhiteTurn(isWhiteTurn) {
  grid = vector<vector<Square>>(n, vector<Square>(n));
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++)
      grid[i][j] = Square::None;
  }
}

void Othello::displayGrid() {}
bool isGameOver() { return false; }

class Player final {
public:
  Player(bool isWhite);

  void placeStone(Othello &otello);

private:
  bool isWhite;
};

Player::Player(bool isWhite) : isWhite(isWhite) {}
void Player::placeStone(Othello &otello) {}

class Rule final {};
