#include <iostream>
using namespace std;

int main(){
	string n;
	cin>>n;
	
	int k=0,m=0;
	
	k=n.size()/2;
	
	for(int i=0;i<k;i++){
		 if(n[i]==n[n.size()-1-i]){
				m++;					 
		 }
	}
    
    cout<<m;
    
    cin>>m;
	
	return 0;	
}
