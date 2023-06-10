#include <bits/stdc++.h>

using namespace std;


//>
//<
int a;
char arr[22];
void fun(int p){
		if(p < 21 - a){
			return;
		}
		
	if(arr[p]=='X'){
		arr[p]='A';
		fun(p-1);
		return;
	}
	arr[p]='X';
	return;
}

int main(){
	cin.tie(0);
	ios_base::sync_with_stdio(0);
	cout.tie(0);


	cin>>a;
	for(int i=1;i<=20;i++){
			arr[i]='A';
	}
	for(int i=0;i!= pow(2,a);i++){
		for(int j=21-a; j != 21;j++){
			cout<<arr[j];
		}cout<<"\n";
		fun(20);
	}
	
	
	
	return 0;	
}