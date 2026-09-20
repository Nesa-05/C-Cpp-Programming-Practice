#include <bits/stdc++.h>
using namespace std;
int main() {
    double n;
    cin>>n;
    int inte = floor(n);
    double dec = n - inte;

    if (dec == 0) {
        cout << "int " << inte;
    }
    else {
        cout << "float " << inte << " " << dec;
    }
    return 0;
}
