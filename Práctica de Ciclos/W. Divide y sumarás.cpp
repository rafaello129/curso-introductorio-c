#include <bits/stdc++.h>

using namespace std;

int main(){
	long long b=0,c=0;

	cin>>b;
	for(int i=1;i<= b ;i*=2){
		c+= ( b / i);
	}
	cout<<c;
	return 0;	
}