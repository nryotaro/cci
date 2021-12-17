#include "tg2.h"
#include <bits/stdc++.h>
using namespace std;

Node::Node(int value) : value(value) {}
Node::~Node() {
    if(left != nullptr)
        delete left;
    if(right != nullptr)
        delete right;
}

Node *solve(int array[], int from, int to) {
    if(to <= from)
        return nullptr;
    int mid = (from + to) / 2;
    Node *parent = new Node(array[mid]);
    parent->left = solve(array, from, mid);
    parent->right = solve(array, mid + 1, to);
    return parent;
}

Node *solve(int array[], int size) {
    if(size == 0)
        return nullptr;
    return solve(array, 0, size);
}