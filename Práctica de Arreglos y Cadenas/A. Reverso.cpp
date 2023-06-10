#include <bits/stdc++.h>

using namespace std;



void  f(int a){
	if( a == 0)return;
	int b;
	cin>>b;
	f(a-1);
	cout<<b<<" ";
}

int main(){
	cin.tie(0);
	ios_base::sync_with_stdio(0);
	cout.tie(0);
int a;
cin>>a;

	f(a);
	
	
	
	return 0;	
}