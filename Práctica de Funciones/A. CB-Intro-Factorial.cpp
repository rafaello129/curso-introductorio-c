#include <bits/stdc++.h>

using namespace std;

int main(){
	cin.tie(0);
	ios_base::sync_with_stdio(0);
	cout.tie(0);
	int i=0;
	long long a,b,c,d=1;
	cin>>a;
	
	
	for(int i=1;i!= a+1;i++){
		d*=i;
	}
	cout<<d;
	
	
	
	return 0;	
}