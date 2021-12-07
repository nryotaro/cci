#include "sq/sq1.h"
#include <gtest/gtest.h>

TEST(sq1, 1) {
    Stack3<int> sut = Stack3<int>(5);
    sut.push(1, 0);
    int top = sut.top(0);
    EXPECT_EQ(1, top);
    sut.push(2, 0);
    sut.push(3, 0);
    sut.push(4, 1);
    EXPECT_EQ(3, sut.pop(0));
    EXPECT_EQ(4, sut.top(1));
}