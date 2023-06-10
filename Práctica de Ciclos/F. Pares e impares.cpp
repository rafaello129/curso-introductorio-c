#include <bits/stdc++.h>

using namespace std;


bool arr[100000];
int main(){
	long long  m,n=0,a=0 , p;
	cin>>m;

	
	for(int i=0;i<m;i++){
		cin>>p;
		(p%2)? ( n++) : (a++);
		}
		
		cout<<a<<" "<<n;
	return 0;	
}