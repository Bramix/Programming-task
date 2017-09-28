#include<iostream>
#include<Math.h>
using namespace std;

int main(){
	double x1,y1,r1,x2,y2,r2,res=-1,O1O2;
	cin>>x1>>y1>>r1>>x2>>y2>>r2;
	
	O1O2=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
	
	if(r1+r2>O1O2){
		res=2;
	}
	
	if(r1+r2==O1O2||(O1O2==r1-r2&&r1>r2)||(O1O2==r2-r1&&r2>r1)){
		res=1;
	}
	
	cout<<res;
	
	return 0;
}
