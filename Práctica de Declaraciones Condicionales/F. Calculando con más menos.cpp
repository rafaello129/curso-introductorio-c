#include <bits/stdc++.h>

using namespace std;


int arr[1000000];

int main(){
	
	double a,b,c;
	cin>>a>>b>>c;
	if(b==0){
		cout<<"indefinido";
		return 0;
	};
	
	cout<<(a/b) + c<<" ";
	
	if(c!=0){
		cout<<(a/b) - c;
	}	
	
	return 0;	
}