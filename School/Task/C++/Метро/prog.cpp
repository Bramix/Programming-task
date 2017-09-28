#include<iostream>
#include<cstdio>
using namespace std;

int main(){
	freopen("Input.txt","r",stdin);
	freopen("Output.txt","w",stdout);
	int n,a,b,res;
	cin>>n>>a>>b;
	res=(n-1)*a+(n-2)*b;
	cout<<res;
		
	return 0;
}
