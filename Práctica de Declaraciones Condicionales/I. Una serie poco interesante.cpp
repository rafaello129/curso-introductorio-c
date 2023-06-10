#include <bits/stdc++.h>

using namespace std;


int main(){
	
	long long a,b,c;
	cin>>a>>b;
	b%=3;
	if(a - b == 0){
		cout<<"3 ";
	}else
	if(a - b == -1){
		cout<<"2 ";
	}else{
		cout<<a-b<<" ";
	}
	
	if(a+b> 3){
		if(a + b % 3 == 0 ){
			cout<<"3";
		}else{
		cout<<(a+b)%3;
		}
		
		
	}else{
		cout<<a+b<<" ";
	}
	return 0;	
}