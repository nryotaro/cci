#include<tg/tg7.h>
#include <gtest/gtest.h>
using namespace std;

TEST(tg7, 1) {

  pair<bool, vector<char>> res =
      solve({'a', 'b', 'c', 'd', 'd', 'e', 'f'},
            {{'d', 'a'}, {'b', 'f'}, {'d', 'b'}, {'a', 'f'}, {'c', 'd'}});

  EXPECT_EQ(true, res.first);
  vector<char> ans = {'e', 'c', 'd', 'a', 'b', 'f'};
  EXPECT_EQ(ans, res.second);
}
