#include<iostream>
#include<iomanip>
#include<Math.h>
using namespace std;

int main(){
	int n;
	double res;
	cin>>n;	
	res=n*n;
	res=res/4;
	res=res/M_PI;
	cout<<fixed<<setprecision(3)<<res;
	
	return 0;
}
