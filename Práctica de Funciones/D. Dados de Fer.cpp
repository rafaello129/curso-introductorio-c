#include <bits/stdc++.h>

using namespace std;



int l;
void fun(int a, int t,string b){
	if(t==0){
		cout<<b<<endl;
		return;
	}
	
	for(int i=1;i!=a+1;i++){
			
		fun(a, t-1, b + (char)(i+48));
		
	}		
}

int main(){
	cin.tie(0);
	ios_base::sync_with_stdio(0);
	cout.tie(0);

	int a,b;
	cin>>a>>b;
	fun(a,b,"");
	
	
	
	return 0;	
}