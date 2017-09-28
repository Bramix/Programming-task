#include <iostream>
using namespace std;

int main(){
    int i;
    int k=2,m=3,n,l;
    cin>>n;
    
    if(n==1){
    	cout<<2;
	}
	
	if(n==2){
    	cout<<3;
	}
    
    for(i=2;i<=n;i++){
	    l=k+m;
		k=m;
		m=l;              
    }
    cout<<k;
    return 0;   
}
