#include <bits/stdc++.h>

using namespace std;

int main(){
	long long b=0;
	string a;
	cin>>a;
	for(int i=0;i<a.length();i++){
		b+= ( a[i] - 48);
	}
	cout<<b;
	return 0;	
}