#include <bits/stdc++.h>

using namespace std;

int main(){
	
	long long a,b,c;
	cin>>a>>b>>c;
	
	if( a == b && a ==c && b==c){
		cout<<"I";return 0;
	}
	if( a <= b && a <=c && b<=c){
		cout<<"C";
	return 0;
					}

	
	if( a  >=b && a >=c && b>=c){
		cout<<"D";return 0;
	}
	
	cout<<"X";
	return 0;	
}