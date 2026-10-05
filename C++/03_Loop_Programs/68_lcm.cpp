#include <bits/stdc++.h>
using namespace std;
int main() {
    int a,b,gcd,lcm;
    cin >> a >> b;
    for(int i = 1; i <= a && i <= b; i++) {
        if(a % i == 0 && b % i == 0) {
            gcd = i;
        }
    }
    lcm=(a*b)/gcd;
    cout << lcm;
    return 0;
}