#include<iostream>
using namespace std;

int main(){
	int N,K,P,i;
	cin>>N>>K>>P;
	
	for(i=0;i<P;i++){
		N=N-1+K;
	}
	
	cout<<N;
	
	return 0;
}
