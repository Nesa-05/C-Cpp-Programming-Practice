#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,prime=1;
    cin >> n;
   if(n<=1){
       prime=0;
   }
   for(int i=2; i<n; i++){
       if(n%i==0){
           prime=0;
       }
   }
   if(prime==1){
       cout << "Prime Number.";
   }
   else{
       cout << "Not Prime Number.";
   }
    return 0;
}