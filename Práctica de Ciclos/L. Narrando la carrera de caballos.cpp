#include <bits/stdc++.h>

using namespace std;


//>
//<
bool arr[100000];
int mi=0;
void tet(int c){
	
	if(c==0) cout<< "Al minuto " <<mi<< " los caballos van empatados \n";
	if(c==-1)  cout<< "Al minuto " << mi <<" el caballo 2 toma la delantera \n";
	if(c==1)  cout<< "Al minuto " <<mi<<" el caballo 1 toma la delantera \n";
}


void fun(int a,int b){
	int c=2;
	
	if(a==0){
		if(b>0)c=1;
		if(b<0)c=-1;
		
	};
	
	if(a==1){
		if(b==0)c=0;
		if(b<0)c=-1;
	}
	
	if(a==-1){
		if(b==0) c=0;
		if(b>0) c=1;
	}
	
tet(c);
}
int f(int a){
	if(a==0)return 0;
	if(a<0) return -1;
	return 1;
}
int main(){
	cin.tie(0);
	ios_base::sync_with_stdio(0);
	cout.tie(0);
	int cam=-1;
	int a,b,c,d=0,g;
	cin>>a;
	cin>>b>>c;
	d = b -c;
	g= f(d);
	mi++;
	fun(0, d);	
	a--;
	
	int lo=0;
	 lo = max( lo, abs(d));
	while(a--){
		mi++;
		cin>>b>>c;
	    d= (d + b) - c; 
	    fun(g,d);
	    g = f(d);
	    lo = max( lo, abs(d));
	}
	if(d>0 ){
		cout<<"Termina la carrera y gana el caballo 1 \n";
	}else if(d<0){
		cout<<"Termina la carrera y gana el caballo 2 \n";
	} else{
		cout<<"Termina la carrera y empatan los caballos \n";
	}
	
		cout<<"La distancia maxima entre los caballos fue de "<<lo<<"\n";
	
	return 0;	
}