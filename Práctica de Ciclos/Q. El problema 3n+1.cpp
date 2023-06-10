#include <bits/stdc++.h>

using namespace std;


int main(){
	cin.tie(0);
	ios_base::sync_with_stdio(0);
	cout.tie(0);
long long m,i=0;
	long long a;
	cin>>a;
	m=a;
	while(a!=1){
		(a%2)? ( a= (a *3 ) + 1) : (a/=2 );
		m = max(m,a);
			
		i++;
	};
	
	cout<<i<<" "<<m;
	return 0;	
}