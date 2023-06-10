#include <bits/stdc++.h>

using namespace std;


int main(){
	cin.tie(0);
	ios_base::sync_with_stdio(0);
	cout.tie(0);
	int i=0;
	long long a,b,c,d=0;
	cin>>a>>b>>c;
	for(i=0;d<a;i){
		d+=b;
		i++;
	
		if(d>=a)break; 
		i++;
		d-=c;
	
		
		if(d>=a)break; 
		
	}
	
	cout<<i;
	
	
	return 0;	
}