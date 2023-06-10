#include <bits/stdc++.h>

using namespace std;



int arr[1001][1001];

int main(){
	cin.tie(0);
	ios_base::sync_with_stdio(0);
	cout.tie(0);

	int a;
	cin>>a;
	for(int i=a-1;i>=0;i--){
		for(int j=0;j<a;j++){
			cin>>arr[j][i];
		}
	}
	for(int i=0;i!=a;i++){
		for(int j=0;j<a;j++){
			cout<<arr[i][j]<<" ";
		}cout<<"\n";
	}
	return 0;	
}