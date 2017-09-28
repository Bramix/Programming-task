#include<iostream>
#include<cstdio>
using namespace std;

int metod(int i,int j,int n,int m,int (*mas)[100]){
	int res=0;
	for(i=i;i<n;i++){
			for(j=j;j<m;j++){
				res=res+mas[i][j];
			}
	}
	
	return res;
}


int main(){
	freopen("in.txt","r",stdin);
	freopen("on.txt","w",stdout);
	int m,n,a,b,k,i,j,res=1,buf;
	cin>>m>>n>>a>>b>>k;
	int x[k];
	int y[k];
	
	for(i=0;i<k;i++){
		cin>>x[i];
		cin>>y[i];
	}
	
	int mas[100][100];
	
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			mas[i][j]=0;
		}
	}
	
	for(i=0;i<k;i++){
		mas[x[i]-1][y[i]-1]=-1;
	}	
	
	for(i=0;i<m-a;i++){
		for(j=0;j<n-b;j++){
			buf=metod(i,j,a+i,b+j,mas);
			
			if(buf==0){
				res++;
			}
		}
	}				
	
	cout<<res;
	
	return 0;
}
