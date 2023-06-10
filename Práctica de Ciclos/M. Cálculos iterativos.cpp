#include <bits/stdc++.h>

using namespace std;


int main(){
	cin.tie(0);
	ios_base::sync_with_stdio(0);
	cout.tie(0);
	int a,b,c;
	int n=0;
	cin>>a>>b>>c;	
	

	
	n= pow(((int)((a+1)/2)),2)-  (pow(2,(((int)(log2(b))) +1))-1);
	while(!(n%c)) n/=c;
	cout<<n;
	return 0;	
}