#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,rem,rev=0,ori;
    cin >> n;
    ori=n;
    while(ori!=0){
        rem=ori%10;
        rev=rev*10+rem;
        ori=ori/10;
    }
    if(n==rev){
        cout << "Palindrome Number.";
    }
    else{
        cout << "Not Palindrome Number.";
    }
    return 0;
}