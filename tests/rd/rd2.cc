#include "rd/rd2.h"
#include <gtest/gtest.h>
using namespace std;

TEST(rd2, 1) {
    vector<string> grid = {".#..", "...."};
    optional<string> res = solve(grid);
    EXPECT_EQ("drrr", res.value());
}

TEST(rd2, 2) {
    vector<string> grid = {".#..", "...#"};
    optional<string> res = solve(grid);
    EXPECT_FALSE(res.has_value());
}