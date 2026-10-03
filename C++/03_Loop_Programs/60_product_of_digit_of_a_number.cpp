#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,pro=1;
    cin >> n;
    while(n!=0){
        int N=n%10;
        pro=pro*N;
        n=n/10;
    }
    cout << pro;
    return 0;
}