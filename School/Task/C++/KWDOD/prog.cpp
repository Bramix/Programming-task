#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	double a,b,c;
	
	cin>>a>>b>>c;
	
	if(a>0){
		cout<<a*a<<" ";
	}
	else{
		cout<<a<<" ";
	}
	
	if(b>0){
		cout<<b*b<<" ";
	}
	else{
		cout<<b<<" ";
	}
	
	if(c>0){
		cout<<c*c<<" ";
	}
	else{
		cout<<c<<" ";
	}
		
	return 0;
}
