#include<iostream>
#include<cstdio>
using namespace std;

int summa(int n){
	int res=0;
	while(n>=1){
		res=res+n%10;
		n=n/10;
	}
	return res;
}

int main(){
	freopen("INPUT.TXT","r",stdin);
	freopen("OUTPUT.TXT","w",stdout);
	int n,i,res=0;
	cin>>n;
	
	for(i=1;i<=n;i++){
		if(n%i==0){
			if(res<=summa(i)){
				res=i;
			}
		}
	}
	
	cout<<res;
	
	return 0;
}
