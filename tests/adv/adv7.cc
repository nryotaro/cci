#include "adv/adv7.h"
#include <gtest/gtest.h>
#include <unordered_map>
using namespace std;

TEST(adv7, 1) {

  vector<pair<string, int>> names = {{"John", 15},
                                     {"Jon", 12},
                                     {"Chris", 13},
                                     {"Kris", 4},
                                     {"Christopher", 19}};
  vector<pair<string, string>> synonyms = {{"Jon", "John"},
                                           {"John", "Johnny"},
                                           {"Chris", "Kris"},
                                           {"Chris", "Christopher"}};
  unordered_map<string, int> res = solve(names, synonyms);
  unordered_map<string, int> ans;
  ans["John"] = 27;
  ans["Kris"] = 36;
  EXPECT_EQ(ans, res);
}
