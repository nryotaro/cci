#include <bits/stdc++.h>
using namespace std;

class Color final {
public:
  int r, g, b;
  Color(int r, int g, int b);

  bool operator==(const Color &color) const;
};

Color::Color(int r, int g, int b) : r(r), g(g), b(b){};
bool Color::operator==(const Color &color) const {
  return r == color.r && g == color.g && b == color.b;
};

void fill_color(int screen_h, int screen_w, Color *screen[], Color color,
                Color initial_color, int h, int w, vector<vector<bool>> &done) {
  cout << h << " " << w << endl;
  if (!(0 <= h && h < screen_h && 0 <= w && w < screen_w) || done[h][w]) {
    return;
  }
  done[h][w] = true;

  if (screen[h][w] == initial_color) {
    screen[h][w] = color;
    fill_color(screen_h, screen_w, screen, color, initial_color, h - 1, w,
               done);
    fill_color(screen_h, screen_w, screen, color, initial_color, h - 1, w + 1,
               done);
    fill_color(screen_h, screen_w, screen, color, initial_color, h + 1, w,
               done);
    fill_color(screen_h, screen_w, screen, color, initial_color, h, w - 1,
               done);
  }
}

void solve(int screen_h, int screen_w, Color *screen[], Color color, int h,
           int w) {
  vector<vector<bool>> done(screen_h, vector<bool>(screen_w, false));
  fill_color(screen_h, screen_w, screen, color, screen[h][w], h, w, done);
}

// int main() {
//   Color *s0 = {new Color(1, 2, 3)};
//   Color *s1 = {new Color(1, 2, 3)};
//   Color *s2 = {new Color(1, 2, 2)};
//   Color *screen[] = {s0, s1, s2};
//   solve(3, 1, screen, Color(1, 1, 1), 0, 0);
//   cout << "foobar" << endl;
//   for (int i = 0; i < 3; i++) {
//     for (int j = 0; j < 1; j++) {
//       Color c = screen[i][j];
//       cout << "(" << c.r << "," << c.g << "," << c.b << ") ";
//     }
//     cout << endl;
//   }
//   return 0;
// }
