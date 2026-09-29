#include <bits/stdc++.h>
using namespace std;
int main() {
	int a,b,c,d;
	cin >> a >> b >> c >> d;
	int sm=a;
	if(b<sm){
	    sm=b;
	}
	if(c<sm){
	     sm=c;
	}
	if(d<sm){
	     sm=d;
	}
	cout << "Smallest Number:" << sm;
	return 0;
}