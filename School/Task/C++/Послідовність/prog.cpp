#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int toint(string str){
	int res=0,i,k=1;
	
	for(i=0;i<str.size();i++){
		if(str[i]=='-'){
			k=-1;
		}
		else{
			res=res+(str[i]-'0')*pow(10,str.size()-1-i);
		}
	}
	
	res=res*k;
	
	return res;
}
 
int main(){
	string str,temp="";
	int i,j,max,x,y,buf;
	getline(cin,str);
	
	vector<int> mas;
	temp="";

	str=str+' ';

	for(i=0;i<str.size();i++){
		if(str[i]==' '){
			mas.push_back(toint(temp));
			temp="";
		}
		else{
			temp=temp+str[i];
		}
	}
	
	max=mas[0];
	
	for(i=0;i<mas.size();i++){
		buf=mas[i];
		for(j=i+1;j<mas.size();j++){
			buf=buf+mas[j];
			if(buf>=max){
				max=buf;
				x=i;
				y=j;
			}
		}
	}
	
	cout<<x+1<<" "<<y+1;
	
    return 0;
}
