#include <fstream>
#include <cmath>
using namespace std;

int toint(string str){
	int res=0,i;
	for(i=0;i<str.size();i++){
		res=res+(str[i]-'0')*pow(10,str.size()-1-i);
	}
	return res;
}

string revers(string str){
	string res="";
	int i;
	
	for(i=0;i<str.size();i++){
		res=res+str[str.size()-1-i];
	}
	
	return res;
}

int main(){
	ifstream cin("Input.txt");
	ofstream cout("Output.txt");
	
	int gd,xv,sec,i,j=2,d;
	char c;
	cin>>gd;
	if(gd==0){
		cin>>gd;
	}
	cin>>c;
	
	cin>>xv;
	if(xv==0){
		cin>>xv;
	}
	cin>>c;
	
	cin>>sec;
	if(sec==0){
		cin>>sec;
	}

	string str,buf="";
	cin>>str;
	int mas[3];
	for(i=0;i<3;i++){
		mas[i]=0;
	}
	for(i=str.size()-1;i>=0;i--){
		if(str[i]==':'||i==0){
			if(i==0){
				buf=buf+str[i];
			}
			buf=revers(buf);
			mas[j]=toint(buf);
			j--;
			buf="";
		}
		else
		buf=buf+str[i];
	}
	
	sec=sec+mas[2];
	xv=xv+sec/60;
	sec=sec-(int)(sec/60)*60;
	xv=xv+mas[1];
	gd=gd+xv/60;
	xv=xv-(int)(xv/60)*60;
	gd=gd+mas[0];
	
	d=gd/24;
	if(d==0){
		if(gd<10){
			cout<<"0"<<gd<<":";
		}
		else{
			cout<<gd<<":";
		}
		if(xv<10){
			cout<<"0"<<xv<<":";
		}
		else{
			cout<<xv<<":";
		}
		
		if(sec<10){
			cout<<"0"<<sec;
		}
		else{
			cout<<sec;
		}
	}
	
	else{
		gd=gd-d*24;
		if(gd<10){
			cout<<"0"<<gd<<":";
		}
		else{
			cout<<gd<<":";
		}
		if(xv<10){
			cout<<"0"<<xv<<":";
		}
		else{
			cout<<xv<<":";
		}
		
		if(sec<10){
			cout<<"0"<<sec;
		}
		else{
			cout<<sec;
		}
		cout<<"+"<<d;
		
	}
	
	cin.close();
	cout.close();
	
	return 0;
}
