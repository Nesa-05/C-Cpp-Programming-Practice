#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,prime=1,countt=0;
    cin >> n;
   for(int i=2; i<=n; i++){
       prime =1;
   for(int j=2; j<i; j++){
       if(i%j==0){
           prime=0;
           break;
       }
   }
   if(prime==1){
       cout << i << endl;
       countt++;
   } }
   cout << "Count :" << countt;
    return 0;
}