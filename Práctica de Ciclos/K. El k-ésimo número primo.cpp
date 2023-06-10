#include <bits/stdc++.h>

using namespace std;

bool arr[100000];
int main(){
	bool band;
	long long  m,c=0,h;
	cin>>m;
	band=0;
	for(int i=2;c<m;i++){
		for(int j=2 ; j<=sqrt(i);j++){
			if(i% j == 0){
			band=true;break;
			}
		}
		if(band==0){
			c++;h=i;
			
		}
		band=0;
	}
		cout<<h;
	return 0;	
}