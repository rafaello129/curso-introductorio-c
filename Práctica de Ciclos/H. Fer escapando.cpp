#include <bits/stdc++.h>

using namespace std;


bool arr[100000];
int main(){
	long long  m,n=0,a=0,p,c=0;
	cin>>m>>n>>a;
	for(int i=1;i<=m;i++){
		cin>>p;
		n+=p;
		
			while(n>= a + ( c *i)){
				c++;
			}

	}
	cout<<c;
	
	return 0;	
}