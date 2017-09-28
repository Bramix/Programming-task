#include<iostream>
using namespace std;

int main(){
	int n,x,y,z;
	cin>>n;
	x=(n/3+n/6+n/12)/2+n/6+n/12;
	z=(n/3+n/6+n/12)/2;
	y=n-x;
	y=y-z;
	cout<<x<<" "<<y<<" "<<z;
	
	return 0;
}

