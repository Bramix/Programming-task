#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	double a,b,res;
	
	cin>>a>>b;
	
	if(a>=b){
		res=a;
	}
	else{
		res=b;
	}
	
	cout<<res;
	
	return 0;
}
