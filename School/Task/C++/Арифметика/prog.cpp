#include<iostream>
#include<cstdio>
using namespace std;

int main(){
	freopen("count.in","r",stdin);
	freopen("count.out","w",stdout);
	
	int i,res=0,j,buf=0;
	string text;
	cin>>text;
	char mas[]={'0','1','2','3','4','5','6','7','8','9'};
	
	
	for(i=0;i<10;i++){
		buf=0;
		for(j=0;j<text.size();j++){
			if(text[j]==mas[i]){
				buf++;
			}
		}
		
		if(buf>0){
			res++;
		}
	}
	
	cout<<res;
	
	return 0;
}
