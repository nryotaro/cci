#include "as/as2.h"
#include <gtest/gtest.h>
#include <set>

TEST(as2, 1) {
    EXPECT_TRUE(solve("doge", "edog"));
    //    solve();
}

TEST(as2, 2) {
    std::multiset<int> a = {23, 2};
    std::multiset<int> b = {23, 2};
    EXPECT_EQ(a, b);

    EXPECT_FALSE(solve("aoge", "edog"));
}