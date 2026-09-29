#include <bits/stdc++.h>
using namespace std;
int main() {
    double salary, tax;
    cin >> salary;
    if (salary <= 250000)
        tax = 0;
    else if (salary <= 500000)
        tax = salary * 0.05;
    else if (salary <= 1000000)
        tax = salary * 0.10;
    else
        tax = salary * 0.20;

    cout << "Income Tax: " << tax;
    return 0;
}