#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	int v,r,p,b,r1,r2,res;
	cin>>v>>r>>p>>b;
	r1=v/b;
	r2=r/p;
	if(r1>r2){
		res=r2;
	}
	else{
		res=r1;
	}
	
	cout<<res;
	return 0;
}
