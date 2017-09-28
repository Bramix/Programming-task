#include<iostream>
using namespace std;

int main(){

	int i,P,K,x,y,res=1,buf;
	int pl[3];
	for(i=0;i<3;i++){
		pl[i]=0;
	}
	cin>>P>>K;
	pl[P-1]=1;
	
	for(i=0;i<K;i++){
		cin>>x>>y;
		buf=pl[x-1];
		pl[x-1]=pl[y-1];
		pl[y-1]=buf;
	}
	
	for(i=0;i<3;i++){
		if(pl[i]==1){
			res=res+i;
		}
	}
	
	cout<<res;
		
	return 0;
}
