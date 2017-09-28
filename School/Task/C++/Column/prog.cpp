#include<iostream>
using namespace std;

int main(){
	int n,i,j,buf,k=0,t=0;
	cin>>n;
	int *m=new int[n];
	
	for(i=0;i<n;i++){
		cin>>m[i];
	}
	
	for(i=0;i<n;i++){
		if(m[i]==0){
			
		}
		else{
			t=0;
			for(j=i+1;j<n;j++){
				m[j-1]=m[j];
				if(m[j]==0){
					t=1;
				}
			}
			if(t==0){
				break;
			}
			m[j]=buf;
			i--;
			k++;
		}
	}
	
	cout<<k;
		
	delete []m;
	
	return 0;
}
