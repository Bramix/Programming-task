#include <iostream>
using namespace std;
 
int main(){
	int n,i=1,j=1,k;
	cin>>n;
	
	for(i=1;i<n;i++){
		j++;
		k=j;
		while(k>=1){
			if(k%10==8){
				j++;
				break;
			}
			k=k/10;
		}
	}
	
	cout<<j;
	
    return 0;
}
