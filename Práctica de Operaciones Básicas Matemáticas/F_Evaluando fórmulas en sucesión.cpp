#include <bits/stdc++.h>

using namespace std;


int main(){
	double a,b,c;
	cin>>a;
	b = (a + 5)/( 2 * ( a + 1));
	c = ((b*b) + (a * (a - (2* b))))/ ( a *b);
	cout<<c;

	return 0;	
}