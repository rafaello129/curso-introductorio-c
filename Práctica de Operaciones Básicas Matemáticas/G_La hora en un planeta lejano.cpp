#include <bits/stdc++.h>

using namespace std;

int main(){
	int a,b,c;
	cin>>a;
	cout<< (int ) (a / 42000)<<" ";
	a%=42000;
	cout<<(int)(a/3500)<<" ";
		a%=3500;
		cout<<(int)(a/50)<<" ";
		a%=50;
			cout<<a;
	return 0;	
}