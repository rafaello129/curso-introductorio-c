#include <bits/stdc++.h>

using namespace std;


unsigned long long  f(int a){
	if( a ==0)return 1;
	
	return a * f(a-1);
}

int main(){
	cin.tie(0);
	ios_base::sync_with_stdio(0);
	cout.tie(0);
int a;
cin>>a;
	cout<<f(a);
	
	
	
	return 0;	
}