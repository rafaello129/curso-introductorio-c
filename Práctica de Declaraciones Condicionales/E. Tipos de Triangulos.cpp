#include <bits/stdc++.h>

using namespace std;

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

int arr[1000000];

int main(){
	
	int a,b=0;
	cin>>a;
	arr[a]++;	
	
	cin>>a;
	if(arr[a]!=0){
		b++;
	}	
	arr[a]++;	
	
	cin>>a;
	if(arr[a]!=0){
		b++;
	}	
	arr[a]++;	
	
	if(b==0){
		cout<<"escaleno";
	}
	if(b==1){
		cout<<"isosceles";
	}
	if(b==2){
		cout<<"equilatero";
	}
		
	return 0;	
}