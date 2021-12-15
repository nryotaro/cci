#include <iostream>
using namespace std;

int solve(int a, int b) {
    int carry = 0, res = 0;
    for(int i = 0; i <= 31; i++) {
        int d_a = (1 << i) & a;
        int d_b = (1 << i) & b;
        if(d_a == 0 && d_b == 0 && carry == 0) {
            carry = 0;
        } else if(d_a && d_b && carry) {
            res |= 1 << i;
            carry = 1 << (i + 1);
        } else if(d_a ^ d_b ^ carry) {
            res |= (1 << i);
            carry = 0;
        } else {
            carry = 1 << (i + 1);
        }
    }
    return res;
}