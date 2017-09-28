#include <iostream>
using namespace std;

bool shastya(long n){
	bool res=false;
	int i=0,c1=0,c2=0;
	
	while(n>=1){
		if(i%2==0){
			c1=c1+n%10;
		}
		else{
			c2=c2+n%10;
		}
		i++;
		n=n/10;	
	}
	
	if(c1==c2){
		res=true;
	}
	
	return res;
}

int main(){
	long n;
	cin>>n;
	
	n++;
	
	while(shastya(n)==false){
		n++;
		
	}
	
	cout<<n;
	
	
	return 0;
}
