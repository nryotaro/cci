
void solve(int &a, int &b) {
    a += b;
    b = a - b;
    a = a - b;
}
