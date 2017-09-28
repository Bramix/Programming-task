#include<iostream>
using namespace std;

int dil(int res){
	int r=0,i;
	for(i=1;i<=res/2+res%2;i++){
		if(res%i==0){
			r++;
		}
	}
	return r;
}

int main(){
	int k,res=0;
	cin>>k;
	
	while(true){
		res++;
		if(k==dil(res)){
			break;
		}
	}
	
	cout<<res;
	
	return 0;
}
