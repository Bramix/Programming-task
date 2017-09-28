#include<iostream>
using namespace std;

int main(){

	int N,K,i,ost,buf,res1=0,res2=1;
	cin>>N>>K;
	
	while(N>0){
		ost=N%(K+1);
		buf=N/(K+1);
		N=N-buf*(K)-ost;
		res1=res1+ost;
		res2++;
	}
	
	cout<<res2<<" "<<res1;
		
	return 0;
}
