#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,countt=0;
    cin >> n;
    while(n!=0){
        n=n/10;
        countt ++;
    }
    cout << countt;
    return 0;
}