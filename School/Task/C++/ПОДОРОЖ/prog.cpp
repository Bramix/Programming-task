#include<iostream>
#include<cstdio>
#include<Math.h>
using namespace std;

int max(int x[],int N){
	int res=0,i,buf=x[0];
	
	for(i=1;i<N;i++){
		if(x[i]>=buf){
			buf=x[i];
			res=i;
		}
	}
	
	return res;
}

int min(int x[],int N){
	int res=0,i,buf=99999999;
	
	for(i=0;i<N;i++){
		if(x[i]<=buf){
			buf=x[i];
			res=i;
		}
	}
	
	return res;
}

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int n,i,j,bufx,bufy,res;
	cin>>n;
	int *x=new int[n];
	int *y=new int[n];
	
	for(i=0;i<n;i++){
		cin>>x[i]>>y[i];
	}
	
	i=max(x,n);
	j=min(x,n);
	
	res=abs(x[i]-x[j])+abs(y[i]-y[j]);
	
	cout<<res;
	
	delete []x;
	delete []y;
	
	return 0;
}
