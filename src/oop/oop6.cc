#include <bits/stdc++.h>
using namespace std;

class Piece final {};

class Puzzle final {
public:  
  Puzzle(vector<vector<Piece*>> expected);
  vector<Piece*> shuffle();
  bool check(vector<vector<Piece*>> pieces);
  bool fitsWith(Piece piece_a, Piece piece_b);

private:
  int n;  
  vector<vector<Piece*>> expected;
  vector<vector<Piece*>> state;
};

class LinkedPiece {
public:
  Piece piece, *top, *left, *bottom, *right;
  LinkedPiece(Piece piece);
};

class Solver final {
public:
  void solve(); 
private:
  Puzzle puzzle;  
};
