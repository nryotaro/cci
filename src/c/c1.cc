#include <bits/stdc++.h>
using namespace std;

vector<string> solve(int k, string path) {
    ifstream file;
    file.open(path);
    vector<string> lines;
    if(file.is_open()) {
        while(file) {
            string line;
            getline(file, line);
            lines.push_back(line);
        }
    }
    if(k >= (int)lines.size()) {
        return lines;
    }
    lines.pop_back();
    return vector<string>(lines.begin() + lines.size() - k, lines.end());
}