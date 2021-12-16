#include "sq/sq2.h"
#include <gtest/gtest.h>

TEST(sq2, 1) {
    const int size = 10;
    int a[size];
    int b[size];
    MinStack stack(a, b, size);

    stack.push(1);
    stack.push(2);

    EXPECT_EQ(1, stack.minValue());
    EXPECT_EQ(2, stack.pop());
}