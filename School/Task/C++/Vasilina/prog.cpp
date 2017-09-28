#include<iostream>
using namespace std;

int main(){
	int n,m,k,res=18;
	
	cin>>n>>m>>k;
	
	while(n<k){
		n=n+m;
		res++;
	}
	
	cout<<res;
	
	return 0;
}
