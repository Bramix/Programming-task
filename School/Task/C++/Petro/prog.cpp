#include<iostream>
using namespace std;

int main(){
	int m,n,i,j,buf=999999,sum=0,res=0;
	cin>>n>>m;
	int *mas=new int[m];
	
	for(i=0;i<m;i++){
		cin>>mas[i];
	}
	
	for(i=0;i<m;i++){
		for(j=i;j<m;j++){
			if(mas[j]>=mas[i]){
				buf=mas[i];
				mas[i]=mas[j];
				mas[j]=buf;
			}
		}
	}
	
	for(i=0;i<m;i++){
		if(sum>=n){
			break;
		}
		sum=sum+mas[i];
		res++;
	}
	
	if(sum<n){
		res=0;
	}
	
	delete []mas;	
	
	cout<<res;
	
	return 0;
}
