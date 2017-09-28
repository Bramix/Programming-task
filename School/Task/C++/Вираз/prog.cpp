#include<iostream>
#include<cstdio>
#include <sstream>
using namespace std;

int ch(string str){
	int res,i,j,k=0,a=0,b;
	string buf;
	char zn;
	
	for(i=0;i<str.size();i++){
		if('0'<=str[i]&&str[i]<='9'){
			buf=buf+str[i];
		}
		if(str[i]=='+'||str[i]=='-'||str[i]=='*'||i==str.size()-1){
			istringstream  buffer(buf);
			buffer>>a;
			
			if(k==0)
			res=a;
			
			if(k==1){
				if(zn=='+'){
					res=res+a;
				}
				else if(zn=='-'){
					res=res-a;
				}
				
				else if(zn=='*'){
					res=res*a;
				}
			}
			
			zn=str[i];
			buf="";
			k=1;
			a=0;
		}
		
	}
	
	return res;
	
}

int main(){
	freopen("expr.in","r",stdin);
	freopen("expr.out","w",stdout);
	int n,i,res;
	cin>>n;
	
	string *str=new string[n];
	for(i=0;i<n;i++){
		cin>>str[i];
	}
	
	for(i=0;i<n;i++){
		res=ch(str[i]);
		cout<<res<<endl;
	}
	
	delete []str;
	
	return 0;
}
