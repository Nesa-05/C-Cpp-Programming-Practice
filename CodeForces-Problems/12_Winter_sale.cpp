#include <bits/stdc++.h>
#include <iomanip>
using namespace std;
int main() {
    double x,p,z;
    cin >> x >> p ;
    z={(p*100)/(100-x)};
    cout<<fixed<<setprecision(2)<< z;
    return 0;
}