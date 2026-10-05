#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,n1=0,n2=1,next;
    cin >> n;
    next=n1+n2;
    cout << n1 << " " << n2 << " ";
    for(int i=3; i<=n; i++){
        cout << next << " "; 
        n1=n2;
        n2=next;
        next=n1+n2;
    }
    return 0;
}