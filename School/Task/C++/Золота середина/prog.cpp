#include<iostream>
using namespace std;

int main(){
	int a,b,c,res;
	cin>>a>>b>>c;
	if(a<=b&&b<=c||c<=b&&b<=a){
		res=b;
	}
	if(b<=a&&a<=c||c<=a&&a<=b){
		res=a;
	}
	if(a<=c&&c<=b||b<=c&&c<=a){
		res=c;
	}
	
	cout<<res;
	
	return 0;
	
}
