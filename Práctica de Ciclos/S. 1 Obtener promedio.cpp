#include <bits/stdc++.h>

using namespace std;


int main(){
	cin.tie(0);
	ios_base::sync_with_stdio(0);
	cout.tie(0);
	double a,b,c=0;
	cin>>a;
	for(int i=0;i!=a;i++){
		cin>>b;
		c+=b;
	}
	
	cout<<fixed<<setprecision(2)<<c/a;
	
	return 0;	
}