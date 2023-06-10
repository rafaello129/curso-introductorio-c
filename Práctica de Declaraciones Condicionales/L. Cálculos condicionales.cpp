#include <bits/stdc++.h>

using namespace std;


int main(){
	
	long long a,b=0,c;
	cin>>a;
	if(a%2==0){
		a/=2;
	}else{
		a++;
	}
	b++;
	if(a>=100){
		a/=100;
	b++;
	}else{
	if(a>=10 && a<=99){
		a/=10;
		b++;
	}
	}
	
	if(a%3==0){
		a--;
		b++;
	}
	cout<<a<<" "<<b;
	return 0;	
}