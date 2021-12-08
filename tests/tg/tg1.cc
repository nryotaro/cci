#include "tg/tg1.h"
#include <gtest/gtest.h>
using namespace std;

TEST(tg1, 1) {
    vector<int> u = {1, 3};
    vector<int> v = {2, 4};
    int a = 1;
    int b = 2;
    EXPECT_TRUE(solve(u, v, a, b));
}

TEST(tg1, 2) {
    vector<int> u = {1, 3};
    vector<int> v = {2, 4};
    int a = 1;
    int b = 4;
    EXPECT_FALSE(solve(u, v, a, b));
}

TEST(tg1, 3) {
    vector<int> u = {1, 2, 3};
    vector<int> v = {2, 3, 4};
    int a = 1;
    int b = 4;
    EXPECT_TRUE(solve(u, v, a, b));
}