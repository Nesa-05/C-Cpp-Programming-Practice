#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,ori,rem,sum=0;
    cin >> n;
    ori=n;
    while(ori!=0){
        rem=ori%10;
        sum=sum+rem*rem*rem;
        ori=ori/10;
    }
    if(n==sum){
        cout << "Armstrong Number.";
    }
    else {
        cout << "Not Armstrong Number.";
    }
    return 0;
}