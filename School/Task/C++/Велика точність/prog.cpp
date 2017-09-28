#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	double n,m,k;
	
	cin>>m>>n>>k;
	
	cout<<fixed<<setprecision(k)<<m/n;
	
	return 0;
}
