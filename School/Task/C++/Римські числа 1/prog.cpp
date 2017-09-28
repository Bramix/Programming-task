#include<iostream>
#include<vector>
using namespace std;

int ArabToRom(string str){
	int res=0,i,a;
	for(i=0;i<str.size();i++){
		if(str[i]=='I')
		a=1;
		if(str[i]=='V')
		a=5;
		if(str[i]=='X')
		a=10;
		if(str[i]=='X')
		a=10;
		if(str[i]=='L')
		a=50;	
		if(str[i]=='C')
		a=100;
		if(str[i]=='D')
		a=500;
		if(str[i]=='M')
		a=1000;
		
		if(a>res&&res>0){
			res=a-res;
		}
		else if(a<=res||res==0){
			res=res+a;
		}
		
	}
	return res;
}

int main(){
	string c,a="",b="";
	int i,t=0;
	getline(cin,c);
	for(i=0;i<c.size();i++){
		if(c[i]=='+')
		t=1;
		
		if(t==0)
		a=a+c[i];
		
		if(t==1&&c[i]!='+')
		b=b+c[i];	
	}
		
	t=chislo(a)+chislo(b);
	
	return 0;
}
