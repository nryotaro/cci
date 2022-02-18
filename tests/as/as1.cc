#include <as/as1.h>
#include <gtest/gtest.h>
using namespace std;

TEST(as1, 1) { EXPECT_EQ(false, solve("assfsfs")); }
TEST(as1, 2) { EXPECT_EQ(false, solve1("assfsfs")); }

TEST(as1, 3) { EXPECT_EQ(true, solve("a")); }

TEST(as1, 4) { EXPECT_EQ(true, solve1("a")); }
