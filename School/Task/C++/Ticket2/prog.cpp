#include <iostream>
using namespace std;

int main(){
	double N,M,res=60;
	cin>>N>>M;
	int p1,p2,p3;
	p1=N*3+M*2;
	p2=40+M*2;
	p3=30+N*3;
	if(p1<=p2&&p1<=p3){
		res=p1;
	}
	else{
		if(p2<=p1&&p2<=p3){
			res=p2;
		}
		else{
			if(p3<=p2&&p3<=p1){
				res=p3;
			}	
			else{
				if(res>=60){
					res=60;
				}
			}
		}
	}	
	
	cout<<res;
	return 0;
}
