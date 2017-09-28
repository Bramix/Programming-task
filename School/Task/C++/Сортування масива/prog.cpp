#include<iostream>
using namespace std;

int main(){
	int n,i,j,buf;
	cin>>n;
	int *mas=new int[n];
	
	for(i=0;i<n;i++){
		cin>>mas[i];
	}
	
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(mas[j]<mas[i]){
				buf=mas[i];
				mas[i]=mas[j];
				mas[j]=buf;
			}
		}
	}
	
	for(i=0;i<n;i++){
		cout<<mas[i]<<endl;
	}
	
	delete []mas;
	return 0;
}
