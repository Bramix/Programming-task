#include<iostream>
using namespace std;

int main(){
	int n,res=0;
	cin>>n;
	
	while(n>0){
		if((n-5)%5==0||(n-5)%2==0){
			n=n-5;
			res++;
		}
		else{
			n=n-2;
			res++;
		}
	}
	
	cout<<res;
	
	return 0;
}
