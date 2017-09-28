#include <iostream>
using namespace std;

int summa(string str,int n){
	int i,res=0;
	for(i=0;i<str.size();i++) {
		if(i==n){
			
		}
		else{
			res=res+(str[i]-'0');
		}	
	}
	return res;
}

int main(){
	string str;
	int i,buf=-99999,k;
	getline(cin,str);
		
	for(i=0;i<str.size();i++){
		if(buf<=summa(str,i)){
			buf=summa(str,i);
			k=i;
		}
	}
	
	for(i=0;i<str.size();i++) {
		if(i==k){
			
		}
		else{
			cout<<str[i];
		}	
	}
	
	return 0;
}
