#include <bits/stdc++.h>
using namespace std;
int main() {
    int start,end,ori,rem,sum;
    cin >> start >> end;
    for(int i=start; i<=end; i++){
    ori=i;
    sum=0;
    while(ori!=0){
        rem=ori%10;
        sum=sum+rem*rem*rem;
        ori=ori/10;
    }
    if(i==sum){
        cout << i << " ";
    }}
    
    return 0;
}