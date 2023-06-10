#include <bits/stdc++.h>

using namespace std;


//>
//<
int f(int n){
	if(n<=5)return 1;
	return f(n-2)*5;
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