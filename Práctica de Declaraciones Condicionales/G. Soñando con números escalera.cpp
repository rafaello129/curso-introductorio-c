#include <bits/stdc++.h>

using namespace std;



bool fun(long long a){
	for(long long i=1; i <= a ;i= (i *10) + 1){
	
		if(a == i*i){
			
			return true;	
		}
	}
	return 0;
}

bool f(long long a,string d){
	if( fun(a) ){
		cout<<d;
		return 0;
	}
	return 1;

}
int main(){
	
	long long a,b,c;
	cin>>a>>b>>c;
	
	if(f(a,"es escalera inicialmente")){
	
		a-=b;
		a/=(c+1);
	if(f(a,"es escalera despues del primer intento")){
			a-= (b+c);
		a++;
		if(f(a,"es escalera despues del segundo intento")){
			cout<<"nos rendimos";
		}
		
	}
	
	}
	
	
	return 0;	
}