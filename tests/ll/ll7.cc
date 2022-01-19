#include "ll/ll7.h"
#include <gtest/gtest-death-test.h>
#include <gtest/gtest.h>
#include <unordered_set>

TEST(ll7, 1) {
  Node<int> *node0 = new Node(0);
  Node<int> *node1 = new Node(0);
  Node<int> *node2 = new Node(0);
  Node<int> *node3 = new Node(0);

  node0->next = node1;
  node1->next = node2;
  node2->next = node3;

  Result<int> res = solve(node0, node0);
  EXPECT_EQ(true, res.is_same);
}

TEST(ll7, 2) {
  Node<int> *node0 = new Node(0);
  Node<int> *node1 = new Node(0);
  Node<int> *node2 = new Node(0);
  Node<int> *node3 = new Node(0);

  node0->next = node1;
  node1->next = node2;
  node2->next = node3;

  Result<int> res = solve(node0, node1);
  EXPECT_EQ(false, res.is_same);
  unordered_set<Node<int>*> commons = {
    node1, node2, node3
  };
  EXPECT_EQ(commons, res.commons);
}
