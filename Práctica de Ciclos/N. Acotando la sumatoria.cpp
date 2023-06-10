#include <bits/stdc++.h>

using namespace std;


//>
//<
int main(){
	cin.tie(0);
	ios_base::sync_with_stdio(0);
	cout.tie(0);
	int a,b,c;
	int n=0;
	cin>>a;	
	int h=0,i;
	for(i= 1 ; h<a;i++  ){
		h+= (i + 7);
	}
	cout<<i-1;
	return 0;	
}