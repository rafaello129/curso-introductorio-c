#include <bits/stdc++.h>

using namespace std;

int l;
void fun(int a){
	if(a==0)return;
	
	fun(a/2);	
	
	(a%2)? (cout<<"1 "):(cout<<"0 ");
	
}

int main(){
	cin.tie(0);
	ios_base::sync_with_stdio(0);
	cout.tie(0);

	int a;
	cin>>a;
	
	
	fun(a);
	
	return 0;	
}