#include <bits/stdc++.h>
using namespace std;
int main() {
    int marks;
    cin >> marks;
    if (marks >= 80)
        cout << "A+";
    else if (marks >= 70)
        cout << "A";
    else if (marks >= 60)
        cout << "B";
    else if (marks >= 50)
        cout << "C";
    else if (marks >= 40)
        cout << "D";
    else
        cout << "F";
    return 0;
}