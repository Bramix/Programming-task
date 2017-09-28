#include<iostream>
using namespace std;

int main(){
	int n,res=365;
	
	cin>>n;
	
	if(n%4==0&&n%100!=0||n%400==0) 
	res=366;
	
	cout<<res;
	
	return 0;
}
