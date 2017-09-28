#include <iostream>
using namespace std;

int main(){
	int L,K,N,i,res=0,buf;
	cin>>N>>L>>K;
	
	res=L;
	buf=L;
	
	for(i=0;i<N-1;i++){
		buf=buf+K;
		res=res+buf;
	}
	
	cout<<res;
	
	return 0;
}
