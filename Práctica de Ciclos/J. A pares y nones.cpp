#include <bits/stdc++.h>

using namespace std;


bool arr[100000];
int main(){
	long long  m,c,a=0,n=0,f=0,g=0;
	cin>>m;
	while(m--){
		cin>>c;
		(c%2)?(n+=c,f++):(a+=c,g++ );
			}
			if(f==0 ) f=1;
			if(g==0)g=1;
		n/=f;
		a/=g;
		if(n==a){
			cout<<"EMPATE!";
		}else if( n > a){
			cout<<"NONILA";
		}else{
			
			cout<<"APARICIO";
		}
		
	return 0;	
}