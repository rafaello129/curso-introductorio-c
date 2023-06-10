#include <bits/stdc++.h>

using namespace std;


int main(){
	cin.tie(0);
	ios_base::sync_with_stdio(0);
	cout.tie(0);
long long m,i=0;
	long long a,b,c=-999999999999;
	cin>>a;
	while(a--){
		cin>>b;
		c= max(b,c);
	}
	cout<<c;
	
	return 0;	
}