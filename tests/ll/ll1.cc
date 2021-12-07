#include "ll/ll1.h"
#include <gtest/gtest.h>

TEST(ll1, 1) {
    Node<int> *a = new Node<int>(0);
    Node<int> *a1 = new Node<int>(1);
    Node<int> *a2 = new Node<int>(2);
    Node<int> *a3 = new Node<int>(3);
    a->next = a1;
    a1->next = a2;
    a2->next = a3;
    solve(a);
    EXPECT_EQ(0, a->val);
    EXPECT_EQ(1, a->next->val);
    EXPECT_EQ(2, a->next->next->val);
    EXPECT_EQ(3, a->next->next->next->val);
}

TEST(ll1, 2) {
    Node<int> *a = new Node<int>(0);
    Node<int> *a1 = new Node<int>(0);
    Node<int> *a2 = new Node<int>(0);
    Node<int> *a3 = new Node<int>(3);
    a->next = a1;
    a1->next = a2;
    a2->next = a3;
    solve(a);
    EXPECT_EQ(0, a->val);
    EXPECT_EQ(3, a->next->val);
    EXPECT_EQ(nullptr, a->next->next);
}
TEST(ll1, 3) {
    Node<int> *a = nullptr;
    solve(a);
}

TEST(ll1, 4) {
    Node<int> *a = new Node<int>(0);
    Node<int> *a1 = new Node<int>(1);
    Node<int> *a2 = new Node<int>(2);
    Node<int> *a3 = new Node<int>(3);
    a->next = a1;
    a1->next = a2;
    a2->next = a3;
    solve1(a);
    EXPECT_EQ(0, a->val);
    EXPECT_EQ(1, a->next->val);
    EXPECT_EQ(2, a->next->next->val);
    EXPECT_EQ(3, a->next->next->next->val);
}

TEST(ll1, 5) {
    Node<int> *a = new Node<int>(0);
    Node<int> *a1 = new Node<int>(0);
    Node<int> *a2 = new Node<int>(0);
    Node<int> *a3 = new Node<int>(3);
    a->next = a1;
    a1->next = a2;
    a2->next = a3;
    solve1(a);
    EXPECT_EQ(0, a->val);
    EXPECT_EQ(3, a->next->val);
    EXPECT_EQ(nullptr, a->next->next);
}
TEST(ll1, 6) {
    Node<int> *a = nullptr;
    solve1(a);
}