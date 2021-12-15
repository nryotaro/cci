#include <string>
#include <algorithm>
using namespace std;

bool solve(string a, string b) {
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    return a == b;
}