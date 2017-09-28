#include<iostream>
using namespace std;

int main(){
	int a,b,n;
	
	cin>>a>>b>>n;
	
	b=b*n;
	a=a*n+(int)(b/100);
	
	b=b%100;
	
	cout<<a<<" "<<b;
	
	return 0;
}

