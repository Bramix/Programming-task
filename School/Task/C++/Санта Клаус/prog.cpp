#include<iostream>
using namespace std;

int main(){
	int n,m,k,i,j,r;
	
	cin>>n>>m>>k;
	
	int mas[m+k];
	
	for(i=0;i<m+k;i++){
		cin>>mas[i];
	}
	
	cout<<n-(m+k)<<endl;
	
	for(i=1;i<=n;i++){
		r=0;
		for(j=0;j<m+k;j++){
			if(i==mas[j]){
				j=m+k;
				r=1;
			}
		}
		if(r==0){
			cout<<i<<" ";
		}
	}
	
	return 0;
}

