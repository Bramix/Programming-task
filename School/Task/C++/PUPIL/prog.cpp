#include <iostream>
using namespace std;

double pow(int m,int n){
	double res=1;
	int i;
	for(i=0;i<n;i++){
		res=res*m;
	}
	return res;
}

int main(){
	int x,y,z,res;
	cin>>x>>y>>z;
	res=(120-(x+y+z))/5;
	
	cout<<res;
	
	return 0;
}
