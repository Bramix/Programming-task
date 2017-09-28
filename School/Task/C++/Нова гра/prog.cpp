#include<iostream>
using namespace std;

int summa(int mas[],int n){
	int res=0,i;
	for(i=0;i<n;i++){
		res=res+mas[i];
	}
	return res;
}

int main(){
	
	freopen("NEW_GAME.DAT","r",stdin);
	freopen("NEW_GAME.SOL","w",stdout);
	int m,n,i,j,buf,res=0;
	cin>>m>>n;
	int *mas=new int[n-m];
	for(i=m;i<n;i++){
		mas[i-m]=i;
	}
	
	for(i=2;i<n;i++){
		for(j=0;j<n-m;j++){
			if(mas[j]%i==0){
				mas[j]=-1;
			}
		}
		res++;
		buf=summa(mas,n-m);
		if(buf==-1*(n-m)){
			break;
		}
	}
	
	cout<<res;
	return 0;
}
