#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, positive = 0, negative = 0;
    cin >> n;
    vector<int> a(n);
    for(int i=0; i<n; i++) {
        cin >> a[i];
        if(a[i] > 0)
            positive++;
        else if(a[i] < 0)
            negative++;
    }
    cout << "Positive = " << positive << endl;
    cout << "Negative = " << negative;
    return 0;
}