#include <iostream>
using namespace std;

int main(){
	int N,L,T,M,i;
	cin>>N>>L>>T>>M;
	for(i=0;i<M/T;i++){
		N=N*L;
	}
	
	cout<<N;
	return 0;
}
