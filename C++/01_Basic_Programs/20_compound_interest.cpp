#include <bits/stdc++.h>
#include<cmath>
using namespace std;
int main() {
	float p,r,n,A,C;
	cin >> p >> r >> n; 
	r=r/100;
	A=p*pow(1+r,n);
	C=A-p;
	cout << C;
	return 0;
}