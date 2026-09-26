#include <bits/stdc++.h>
using namespace std;
int main() {
    int day,month,year;
    cin >> day;
    year=day/365;
    day=day%365;
    month=day/30;
    day=day%30;
    cout << "Years:"<<year<<endl;
    cout<<"Months:"<<month<<endl;
    cout<<"Days:"<<day;
    return 0;
	}