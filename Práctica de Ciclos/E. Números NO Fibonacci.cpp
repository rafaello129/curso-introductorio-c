#include <bits/stdc++.h>

using namespace std;


bool arr[100000];
int main(){
	long long  m,n=1,a=1 , p;
	cin>>m;
	while(n<m){
		arr[n]=true;
		p = a;
		a = n + a;
		n = p;
	};
	
	for(int i=1;i<m;i++){
		if(!arr[i]) cout<<i<<" ";
	}
	return 0;	
}