#include<iostream>
#include<cstdio>
using namespace std;

int main(){
	freopen("num.in","r",stdin);
	freopen("num.out","w",stdout);
	
	int n,k,m,i,res=0;
	cin>>m>>n>>k;
	for(i=m;i<=n;i++){
		if(i%k==0){
			res++;
		}
	}
	
	cout<<res;
	
	return 0;
}
