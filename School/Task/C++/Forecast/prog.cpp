#include <iostream>
#include <Math.h>
using namespace std;

int main(){
	int p1,p2,p3,res1,res2;
	cin>>p1>>p2>>p3;
	res1=abs(p1-p3);
	res2=abs(p2-p3);
	char res;
	if(res1==res2){
		res='D';
	}
	else{
		if(res1>res2){
			res='J';
		}
		else{
			res='V';
		}
	}
	
	cout<<res;
	
	return 0;
}
