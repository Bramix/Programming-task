#include<iostream>
using namespace std;

int main(){
	long n;
	cin>>n;
	
	int i=0,k=0;
	
	cout<<n/86400<<" ";
	n=n%86400;
	cout<<n/3600<<" ";
	n=n%3600;
	cout<<n/60<<" ";
	n=n%3600;
	cout<<n%60;
	
	return 0;
}

