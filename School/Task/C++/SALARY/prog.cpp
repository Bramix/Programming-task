#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	double n;
	cin>>n;	
	cout<<fixed<<setprecision(2)<<n-(n/100)*20;
	return 0;
}
