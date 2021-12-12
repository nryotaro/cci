#include "ss/ss1.h"
#include <gtest/gtest.h>
using namespace std;

TEST(ss1, 1) {
    int a[] = {1, 2, 3, 4, 0, 0, 0, 0};
    int b[] = {1, 2, 2, 4};

    solve(a, b, 4, 4, 8);
    int ans[] = {1, 1, 2, 2, 2, 3, 4, 4};
    for(int i = 0; i < 8; i++) {
        EXPECT_EQ(ans[i], a[i]);
    }
}