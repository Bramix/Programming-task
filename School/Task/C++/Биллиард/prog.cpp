#include <iostream>
#include <Math.h>
using namespace std;

int main(){
	int N,M,buf1=0,NSD=1,i,NSK;
	cin>>N>>M;
	cout<<abs(N-M);
	
	for(i=2;i<=N;i++){
		if(M%i==0&&N%i==0){
			buf1=i;				
		}
		if(buf1>NSD){
			NSD=buf1;		 
	    }
	}
	
	NSK=(M*N)/NSD;
	
	if((NSK/N)%2==0&&(NSK/M)%2==0){
		cout<<" "<<1;					   							   
    }
    
    else if((NSK/N)%2==1&&(NSK/M)%2==1){
		cout<<" "<<3;					   							   
    }
    
    else if((NSK/N)%2==0&&(NSK/M)%2==1){
		cout<<" "<<4;					   							   
    }
    
    else if((NSK/N)%2==1&&(NSK/M)%2==0){
		cout<<" "<<2;					   							   
    }
	
	cin>>N;
	
	return 0;	
}
