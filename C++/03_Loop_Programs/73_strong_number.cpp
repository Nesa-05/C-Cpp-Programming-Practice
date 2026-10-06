#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,ori,fact,sum=0,rem;
    cin >> n;
    ori=n;
     while(ori != 0) {
        rem = ori % 10;

     fact = 1;
     for(int i = 1; i <= rem; i++) {
            fact = fact * i;
        }

        sum = sum + fact;
        ori = ori / 10;
    }

    if(sum == n){
        cout << "Strong Number";
    }
    else
        cout << " Not Strong Number";

    return 0;
}