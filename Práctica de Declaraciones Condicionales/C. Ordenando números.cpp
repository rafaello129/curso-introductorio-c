#include <bits/stdc++.h>

using namespace std;


double func(double a,double b,double c,double d){

	return sqrt( (abs(a-c)*abs(a-c)) + (abs(b-d)*abs(b-d)) );
}

int main(){
	int arr[4];
	cin>>arr[0]>>arr[1]>>arr[2]>>arr[3];
sort(arr,arr+ 4);

	


	
	
	cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<" "<<arr[3];

		
	return 0;	
}