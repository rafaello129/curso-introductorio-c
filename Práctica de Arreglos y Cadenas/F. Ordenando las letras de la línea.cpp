#include <bits/stdc++.h>

using namespace std;

char a[500];
int main(){
	cin.tie(0);
	ios_base::sync_with_stdio(0);
	cout.tie(0);
	
	
	cin.getline(a,500,'\n');
	int t=0;;
	for(int i=0; a[t]!=0;i++){
		t++;
	};
	int pm=-1,p;
	for(int i=0;i<t;i++){
		
		for(int j = 0; j < t -i;j++){
			if(a[j] <123 && a[j] > 96){
				if(pm < a[j]){
					pm=a[j];
					p = j;		
				}
			}	
		}
		if(a[t -1 - i] <123 && a[t-1 - i] > 96){
			swap(a[t -1 - i], a[p]);
		}
		pm=-1;
		p=-1;
	}
	
for(int i=0;i<t;i++){
		cout<<a[i];
		
		}
	return 0;	
}