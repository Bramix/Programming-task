#include<iostream>
using namespace std;

int main(){
	int N,V,i,res1=0,res2=0;
	cin>>N>>V;
	int *mas=new int[N];
	for(i=0;i<N;i++){
		cin>>mas[i];
		if(mas[i]>V){
			res2++;
			if(res1==0){
				res1=i+1;
			}
		}
	}
	
	if(res1==0){
		cout<<0;
	}
	
	else{
		cout<<1<<" "<<res1<<" "<<res2;
	}
		
	return 0;
}
