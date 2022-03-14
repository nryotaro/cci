
#include <bits/stdc++.h>
using namespace std;

class Box final {
public:
  int height, width, depth;
  Box(int height, int width, int depth)
      : height(height), width(width), depth(depth) {}
};

int calc_height(vector<Box> &boxes, int index) {
  int n = boxes.size();
  int res = 0;
  for (int i = index + 1; i < n; i++) {
    if (boxes[index].height < boxes[i].height &&
        boxes[index].width < boxes[i].width &&
        boxes[index].depth < boxes[i].depth) {
      res = max(res, calc_height(boxes, i));
    }
  }
  return boxes[index].height + res;
}
int solve(vector<Box> boxes) {
  int n = boxes.size();
  sort(boxes.begin(), boxes.end(),
       [](const Box &a, const Box &b) -> bool { return b.height < a.height; });
  int res = 0;
  for (int i = 0; i < n; i++) {
    res = max(res, calc_height(boxes, i));
  }
  return res;
}
// int main() {

//   return 0;
// }
