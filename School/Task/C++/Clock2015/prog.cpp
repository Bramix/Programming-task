#include <iostream>
using namespace std;

int main(){
	int N,K,i,j,k=0,c=0;
	cin>>N>>K;
	string *mas1=new string[N];
	string *mas2=new string[N];
	for(i=0;i<N;i++){
		cin>>mas1[i];
		cin>>mas2[i];
	}
	string res="-1";	
		
	for(i=0;i<N;i++){
		k=0;
		for(j=0;j<N;j++){
			if(mas1[i]==mas1[j]&&mas2[i]==mas2[j]&&res!=mas1[i]+" "+mas2[i]){
				k++;
			}
		}
		if(k==N-K){
			c++;
			res=mas1[i]+" "+mas2[i];
		}
	}
	
	if(c>1){
		res="-1";
	}
	
	cout<<res;
	
	delete []mas1;
	delete []mas2;
	return 0;
}
