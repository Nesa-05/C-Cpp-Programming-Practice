#include <bits/stdc++.h>
using namespace std;
int main() {
    int start,end,ori,fact,sum,rem;
    cin >> start << end;
     for(int i = start; i <= end; i++) {
        ori = i;
        sum = 0;

     while(ori != 0) {
        rem = ori % 10;

     fact = 1;
     for(int j = 1; j <= rem; j++) {
            fact = fact * j;
        }

        sum = sum + fact;
        ori = ori / 10;
    }
    if(sum == i)
            cout << i << " ";
     }
    return 0;
} 