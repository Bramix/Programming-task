#include <iostream>
#include <cstdio>
#include <Math.h>
#include <iomanip> 
using namespace std;

int main(){
	freopen("Input.txt","r",stdin);
	freopen("Output.txt","w",stdout);
	int x,y;
	double res;
	string c="";
	cin>>x>>y;
	if(x>=0&&y>=0){
		c=c+"I";
	}
	if(x<=0&&y>=0){
		if(c.size()>0){
			c=c+", ";
		}
		c=c+"II";
	}
	if(x<=0&&y<=0){
		if(c.size()>0){
			c=c+", ";
		}
		c=c+"III";
	}
	if(x>=0&&y<=0){
		if(c.size()>0){
			c=c+", ";
		}
		c=c+"IV";
	}
	
	res=sqrt(x*x+y*y);
	cout<<c<<endl;
	cout<<"D = ";
	cout<<fixed<<setprecision(2)<<res;
	
	return 0;
}
