#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	int m[3],i,res;
	
	for(i=0;i<3;i++){
		cin>>m[i];
	}
	
	res=m[0];
	
	for(i=1;i<3;i++){
		if(m[i]>res){
			res=m[i];
		}
	}
	
	cout<<res;
	
	return 0;
}
