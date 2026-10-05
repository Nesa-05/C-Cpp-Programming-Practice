#include <bits/stdc++.h>
using namespace std;
int main() {
    int base,ex,result=1;
    cin >> base >> ex ;
    for(int i = 1; i <= ex; i++) {
        result = result * base;
    }
    cout << result;
    return 0;
}