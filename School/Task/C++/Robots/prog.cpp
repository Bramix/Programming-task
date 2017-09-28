#include<iostream>
using namespace std;

int main(){
	double m,a,n,b,k,t,i,buf1,buf2;
	cin>>m>>a>>n>>b>>k>>t;
	for(i=0;i<t;i++){
		buf1=(k/m)*a;
		buf2=(k/n)*b;
		if(buf2>=buf1){
			k=k+buf2;
		}
		else{
			k=k+buf1;
		}
	}
	
	cout<<k;
	
	return 0;
	
}
