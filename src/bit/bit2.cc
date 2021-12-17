#include <bits/stdc++.h>
using namespace std;

string solve(double v) {
    if(v == 1.0)
        return "1";
    if(v == 0.0)
        return "0";
    string res = "0.";
    for(double d = 0.5; v > 0.0; d /= 2.0) {
        if((int)res.size() == 32)
            return "ERROR";
        if(v >= d) {
            res.push_back('1');
            v -= d;
        } else
            res.push_back('0');
    }
    return res;
}