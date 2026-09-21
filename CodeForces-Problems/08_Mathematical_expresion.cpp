#include <bits/stdc++.h>
using namespace std;
int main() {
    int a, b, c, ans;
    char s, q;
    cin >> a >> s >> b >> q >> c;
    if (s == '+') {
        ans = a + b;
    }
    else if (s == '-') {
        ans = a - b;
    }
    else if (s == '*') {
        ans = a * b;
    }
    if (ans == c) {
        cout << "Yes";
    }
    else {
        cout << ans;
    }
    return 0;
}