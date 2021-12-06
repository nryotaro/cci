#include <bits/stdc++.h>
using namespace std;

bool solve(string s) {
    unordered_map<char, bool> exist;
    for(auto c : s) {
        if(exist[c])
            return false;
        else
            exist[c] = true;
    }
    return true;
}

bool solve1(string s) {
    int n = s.size();
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; i < n; j++) {
            if(s[i] == s[j])
                return false;
        }
    }
    return true;
}