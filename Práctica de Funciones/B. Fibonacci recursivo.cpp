#include <bits/stdc++.h>

using namespace std;


//>
//<

int l;
int fun(int a){
	l++;
	if(a==0)return 0;
	if(a==1)return 1;
	
	return fun(a-1) + fun(a-2);
}

int main(){
	cin.tie(0);
	ios_base::sync_with_stdio(0);
	cout.tie(0);

	int a;
	cin>>a;
	
	
	cout<<fun(a)<<" ";
	cout<<l;
	
	return 0;	
}