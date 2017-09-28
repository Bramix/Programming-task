#include<iostream>
using namespace std;

int main(){
	int N,i,j,k=0;
	cin>>N;
	int *mas=new int[N];
	
	for(i=0;i<N;i++){
		cin>>mas[i];
	}
	
	for(i=1;i<=8;i++){
		k=0;
		
		for(j=0;j<N;j++){
			if(i==mas[j]){
				k++;
			}
		}
		
		cout<<i<<" "<<k<<" ";
		
	}
		
	return 0;
}
