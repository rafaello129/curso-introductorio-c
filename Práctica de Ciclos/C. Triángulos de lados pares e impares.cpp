#include <bits/stdc++.h>

using namespace std;


int arr[1002][1002];
int main(){
	long long  m,n,impar=0 , par=0;
	cin>>m>>n;
	for(int i=m;i<=n ; i++){
		for(int j=i;j<=n ;j++){
			for(int k = j;k<= n ; k++ ){
				if( i + j > k && j+k>i && i + k > j){
					if( i %2==1 && j%2==1 && k%2==1){
						impar++;
				}
				if( i %2==0 && j%2==0 && k%2==0){
						par++;
				}
				
			}
		}
	}
	}
	cout<<impar<<" "<<par;
	return 0;	
}