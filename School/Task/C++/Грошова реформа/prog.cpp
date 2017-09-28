#include<iostream>
#include<cstdio>
using namespace std;

int main(){
	freopen("money.in","r",stdin);
	freopen("money.out","w",stdout);
	
	int n,i,res;
	cin>>n;
	res=n;
	while(res>=1){	
		cout<<res<<" ";
		if(res==1){
			break;
		}
		if(res%2==0){
			res=res/2;
		}
		else{
			res=res%2;
		}
	}
	
	return 0;
}
