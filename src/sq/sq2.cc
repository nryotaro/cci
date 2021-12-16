#include "sq2.h"
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

MinStack::MinStack(int stack[], int minStack[], int size)
    : stack(stack), minStack(minStack), size(size), index(0) {}

void MinStack::push(int value) {
    if(index == size)
        throw runtime_error("full");
    if(index == 0) {
        stack[index] = minStack[index] = value;
        index++;
    } else {
        stack[index] = value;
        minStack[index] = min(value, minStack[index - 1]);
        index++;
    }
}

int MinStack::pop() {
    if(index == 0)
        throw runtime_error("empty");
    return stack[--index];
}

int MinStack::minValue() {
    if(index == 0)
        throw runtime_error("empty");
    return minStack[index - 1];
}