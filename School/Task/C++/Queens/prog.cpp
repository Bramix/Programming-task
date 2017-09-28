#include<iostream>
using namespace std;

int main(){
	int N,n,i,j,res=0;
	cin>>N>>n;
	int *x=new int[n];
	int *y=new int[n];
	
	for(i=0;i<n;i++){
		cin>>x[i];
		x[i]--;
		cin>>y[i];
		y[i]--;
	}
	int xy[N][N];
	
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			xy[i][j]=0;
		}
	}
	
	for(i=0;i<n;i++){
		xy[x[i]][y[i]]=2;
		for(j=0;j<N;j++){
			if(xy[x[i]][j]==0){
				xy[x[i]][j]=1;
			}
			if(xy[j][y[i]]==0){
				xy[j][y[i]]=1;
			}
			if(xy[x[i]-j][y[i]-j]==0&&x[i]-j>=0&&y[i]-j>=0){
				xy[x[i]-j][y[i]-j]=1;
			}
			if(xy[x[i]+j][y[i]+j]==0&&x[i]+j<N&&y[i]+j<N){
				xy[x[i]+j][y[i]+j]=1;
			}
			if(xy[x[i]-j][y[i]+j]==0&&x[i]-j>=0&&y[i]+j<N){
				xy[x[i]-j][y[i]+j]=1;
			}
			if(xy[x[i]+j][y[i]-j]==0&&x[i]+j<N&&y[i]-j>=0){
				xy[x[i]+j][y[i]-j]=1;
			}
		}	
	}
	
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			//cout<<xy[i][j]<" ";
			if(xy[i][j]==0){
				res++;
			}
		}
		//cout<<endl;
	}
	
	cout<<res;
	
	delete []x;
	delete []y;
	return 0;
}
