#include<iostream>
#include <vector>
using namespace std;

int easy(int k){
	int res=0,i;
	for(i=2;i<k;i++){
		if(k%i==0){
			res++;
		}
	}
	return res;
}

int main(){
	int a,b,i,r,k,j,max=0,res=0;
	vector <int> buf;
	cin>>a>>b;
	
	for(i=a;i<=b;i++){
		r=i;	
		if(easy(r)==0){
			while(r>=1){
				buf.push_back((int)r%10);
				r=r/10;
			}
		}	
	}
	
	for(i=0;i<=9;i++){
		k=0;
		for(j=0;j<buf.size();j++){
			if(i==buf[j]){
				k++;
			}
		}
		if(k>=max){
			max=k;
			res=i;
		}
	}
	
	if(a==0||a==1||b==0||b==1){
		res=0;	
	}
	
	cout<<res;
			
	return 0;
}
