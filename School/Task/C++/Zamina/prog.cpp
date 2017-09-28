#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	double a,b;
	cin>>a>>b;
	if(a==b){
		a=b=0;
	}
	else{
		if(a>b){
			b=a;
		}
		else{
			a=b;
		}
	}
	
	cout<<a<<" "<<b;
	return 0;
}
