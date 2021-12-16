#include <gtest/gtest.h>
#include <ll/ll2.h>

TEST(ll2, 1) {
    Node<int> *node0 = new Node<int>(0);
    Node<int> *node1 = new Node<int>(1);
    Node<int> *node2 = new Node<int>(2);
    Node<int> *node3 = new Node<int>(3);
    Node<int> *node4 = new Node<int>(4);

    node0->next = node1;
    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    EXPECT_EQ(3, solve(node0, 2));
}

TEST(ll2, 2) {
    Node<int> *node0 = new Node<int>(0);
    Node<int> *node1 = new Node<int>(1);
    Node<int> *node2 = new Node<int>(2);
    Node<int> *node3 = new Node<int>(3);
    Node<int> *node4 = new Node<int>(4);

    node0->next = node1;
    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    EXPECT_EQ(4, solve(node0, 1));
}

TEST(ll2, 3) {
    Node<int> *node0 = new Node<int>(0);
    Node<int> *node1 = new Node<int>(1);
    Node<int> *node2 = new Node<int>(2);
    Node<int> *node3 = new Node<int>(3);
    Node<int> *node4 = new Node<int>(4);

    node0->next = node1;
    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    EXPECT_EQ(1, solve(node0, 4));
}