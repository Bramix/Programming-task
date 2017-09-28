#include <iostream>
using namespace std;

int main(){
	int M,n=10,k=0;
	cin>>M;
	
	k++;
	
	while(M>=n){
		n=n+20;
		if(M>=n){
			k++;
		}
		
		n=n+10;
		if(M>=n){
			k++;
		}
	}
	
	cout<<k;
	
	return 0;
}
