#include <iostream>
using namespace std;

int main(){
	int n,i,res=1;
	cin>>n;
	
	for(i=0;i<=n;i+=10){
		res=res*2;
	}
	
	cout<<res;
	
	return 0;
}
