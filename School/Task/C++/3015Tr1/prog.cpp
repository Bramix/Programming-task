#include<iostream>
using namespace std;

int main(){
	int n,i,res;
	cin>>n;
	
	if(n%2==0){
		n++;
	}
	
	i=n-(int)(n/2);
	res=i;
	while(i>1){
		i--;
		res=res+i;
	}
	
	cout<<res;
	
	return 0;
}
