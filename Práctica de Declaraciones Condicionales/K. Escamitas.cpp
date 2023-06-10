#include <bits/stdc++.h>

using namespace std;

int main(){
	
	long long a,b=0,c;
	cin>>a;
	if(a<21){
		cout<<"fria!";
	}
	if(a>29){
		cout<<"caliente!";
	}
	if(a>=21 && a<=29){
	cout<<"tibia";
	}
	
	if(a<15 || a >34){
			cout<<endl<<"RIP escamitas :(";
	}
	
	return 0;	
}