#include <bits/stdc++.h>

using namespace std;


int main(){
	double a,b,c,a2,b2,c2,y,f;
	cin>>a>>b>>c>>a2>>b2>>c2;
	y = ((a*c2) - (a2 * c)) / ( ( a*b2) - (a2*b));
	
		
		f=(c - (b * y))/a;
		cout<<f<<" ";	cout<<y<<" ";
	return 0;	
}