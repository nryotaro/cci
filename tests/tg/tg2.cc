#include "tg/tg2.h"
#include <gtest/gtest.h>

TEST(tg2, 1) {
    int array[] = {1, 2, 3, 4};
    Node *node = solve(array, 4);
    EXPECT_EQ(3, node->value);
    EXPECT_EQ(2, node->left->value);
    EXPECT_EQ(1, node->left->left->value);
    EXPECT_EQ(nullptr, node->left->left->left);
    EXPECT_EQ(nullptr, node->left->left->right);
    EXPECT_EQ(4, node->right->value);
    EXPECT_EQ(nullptr, node->right->left);
    EXPECT_EQ(nullptr, node->right->right);
}

TEST(tg2, 2) {
    int array[] = {1, 2, 3, 4, 5};
    Node *node = solve(array, 5);
    EXPECT_EQ(3, node->value);
    EXPECT_EQ(2, node->left->value);
    EXPECT_EQ(1, node->left->left->value);
    EXPECT_EQ(nullptr, node->left->right);
    EXPECT_EQ(5, node->right->value);
    EXPECT_EQ(4, node->right->left->value);

}