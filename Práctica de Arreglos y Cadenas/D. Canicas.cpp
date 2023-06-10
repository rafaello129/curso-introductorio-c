#include <bits/stdc++.h>

using namespace std;


int arr[10000];
int main(){
	cin.tie(0);
	ios_base::sync_with_stdio(0);
	cout.tie(0);
	int a,b,c;
	cin>>a>>b;
		while(b--){
		cin>>c;
		arr[c]++;
	}
	for(int i=1;i!= a +1 ;i++){
		cout<<arr[i]<<"\n";
	}
	
	
	
	return 0;	
}