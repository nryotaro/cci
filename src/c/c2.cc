#include "c2.h"
#include <bits/stdc++.h>
using namespace std;

void solve(char *str) {
    int length = 0;
    for(; str[length] != '\0'; length++) {
    }
    for(int i = 0; i < length / 2; i++) {
        char c = str[i];
	str[i] = str[length - 1 - i];
        str[length - 1 - i] = c;
    }
}

