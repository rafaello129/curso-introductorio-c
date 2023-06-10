#include <bits/stdc++.h>

using namespace std;



int main(){
	
	long long a,b,c;
	cin>>a>>b>>c;
	if(a<b){
		if(b<c){
			cout<<"0";
		}else
		if(a<c){
			cout<<"1";
		}else{
			cout<<"2";
		}
	}else{
		
		if(c>a){
			cout<<"1";
		}else if( b <c){
			cout<<"2";
		}else{
			cout<<"1";
		}
		
		
		
	}
	
	
	
	return 0;	
}