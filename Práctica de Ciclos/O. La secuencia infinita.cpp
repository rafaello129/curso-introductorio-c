#include <bits/stdc++.h>

using namespace std;


//>
//<
int main(){
	cin.tie(0);
	ios_base::sync_with_stdio(0);
	cout.tie(0);

	int a;
	cin>>a;
	for(int i=1;i<=a;i){
		for(int j=1;j<6;j++){
			if(i>a)break;
			cout<<j<<" ";
			i++;
		}
		for(int j=4;j>1;j--){
			if(i>a)break;
			cout<<j<<" ";
			i++;
		}
	}

	return 0;	
}