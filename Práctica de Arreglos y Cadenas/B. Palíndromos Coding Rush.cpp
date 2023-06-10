#include <bits/stdc++.h>

using namespace std;


string  f(string a){
	for(int i=0;i< a.length() /2;i++){
		if(a[i]!= a[a.length() -1 -i]) return "NP \n";
	}
	 return "P \n";
}

int main(){
	cin.tie(0);
	ios_base::sync_with_stdio(0);
	cout.tie(0);
int a;
cin>>a;
string b;
	while(a--){
		cin>>b;
		cout<<f(b);
	}
	
	
	
	
	return 0;	
}