#include <bits/stdc++.h>

using namespace std;


int main(){
	cin.tie(0);
	ios_base::sync_with_stdio(0);
	cout.tie(0);

	int a;
	cin>>a;
	for(int i=1;i<=a;i+=2){
		for(int j=0;j< (( a/2)) - ( i/2);j++){
			cout<<" ";
		};
		for(int j=0;j<i;j++){
			cout<<"@";
		};cout<<endl;
	}

	return 0;	
}