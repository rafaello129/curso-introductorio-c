#include <bits/stdc++.h>

using namespace std;


//>
//<
double func(double a,double b,double c,double d){

	return sqrt( (abs(a-c)*abs(a-c)) + (abs(b-d)*abs(b-d)) );
}
int f(int a){
	
	if(a%4  == 0){
	if(a% 100 !=0){
		return 29;
	}
	if(a%400 ==0){
		return 29;
	}
	}
	return 28;
}

int main(){
	int a,b,c,d;
	
	cin>>a;	
	cout<<f(a)<<" ";

	cin>>a;
	cout<<f(a)<<" ";
		
	cin>>a;
	cout<<f(a)<<" ";	
	
	cin>>a;
	cout<<f(a);
	
	
		
	return 0;	
}