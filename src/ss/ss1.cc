#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(int a[], int b[], int a_size, int b_size, int length_a) {
    int index_a = a_size - 1, index_b = b_size - 1;
    int cursor = length_a - 1;
    while(true) {
        if(0 <= index_a) {
            if(0 <= index_b) {
                if(a[index_a] <= b[index_b]) {
                    a[cursor--] = b[index_b--];
                } else {
                    a[cursor--] = a[index_a--];
                }
            } else {
                a[cursor--] = a[index_a--];
            }
        } else {
            if(0 <= index_b) {
                a[cursor--] = b[index_b--];
            } else {
                break;
            }
        }
    }
}