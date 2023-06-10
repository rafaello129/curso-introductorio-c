#include <bits/stdc++.h>

using namespace std;

double func(double a,double b,double c,double d){

	return sqrt( (abs(a-c)*abs(a-c)) + (abs(b-d)*abs(b-d)) );
}

int main(){
	double a,b,c,d,f,g,h,i,e=888888888;
	cin>>a>>b>>c>>d;
cin>>f>>g;
	cin>>h>>i;	


	e = min( func(a,b,c,d) , e);
	
		
	e = min(func(c,d,f,g), e);
	
	e = min(func(f,g,h,i), e);
	
	e = min(func(h,i,a,b), e);
	
	cout<<e;

		
	return 0;	
}