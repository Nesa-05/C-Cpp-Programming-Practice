#include <bits/stdc++.h>
using namespace std;
int main() {
	float s1,s2,s3,s4,s5,total,perce;
	cin>> s1>>s2>>s3>>s4>>s5;
	total=s1+s2+s3+s4+s5;
	perce=(total/500)*100;
	cout<<perce;
	return 0;
}