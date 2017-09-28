#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	int n,k,res=1;
	cin>>n>>k;
	
	if(n/2<k){
		res=0;
	}
	
	cout<<res;
	return 0;
}
