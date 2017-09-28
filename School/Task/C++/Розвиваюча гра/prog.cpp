#include<iostream>
#include<cstdio>
using namespace std;

int main(){
	freopen("play.in","r",stdin);
	freopen("play.out","w",stdout);
	
	int n,i,res=1;
	cin>>n;
	for(i=1;i<n;i++){
		res=res+i;
		if(res>n){
			res=res-n;
		}
		cout<<res<<" ";
	}
	
	return 0;
}
