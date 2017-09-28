#include <iostream>
using namespace std;

int main(){
	int n,res=1,buf,i;
	cin>>n;
	
	while(n>1){
		buf=0;
		
		for(i=0;i<n;i++){
			buf++;
			res=res+buf;
		}
		n--;		
	}
	
	cout<<res;
	
	return 0;
}
