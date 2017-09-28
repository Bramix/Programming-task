#include <iostream>
using namespace std;

int main(){
	double r1,r2,r3=-999999,buf;
	int n,i,j;
	cin>>n;
	double *m=new double [n];
	
	for(i=0;i<n;i++){
		cin>>m[i];
	}
	
	for(i=0;i<n;i++){
		buf=0;
		for(j=i;j<n;j++){
			buf=buf+m[j];
			if(r3<buf){
				r1=i;
				r2=j;
				r3=buf;
			}
		}
	}
	
	r1=r1+1;
	r2=r2+1;
	
	cout<<r1<<" "<<r2<<" "<<r3;
	
	delete []m;
	
	return 0;
}
