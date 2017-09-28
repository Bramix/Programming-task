#include <iostream>
#include <cmath>
using namespace std;

int toint(string str){
	int res=0,i;
	for(i=0;i<str.size();i++){
		res=res+(str[i]-'0')*pow(10,str.size()-1-i);
	}
	return res;
}

int main(){   
	string str,buf="";
	int i,k=1;
	cin>>str;
	
	for(i=0;i<str.size();i++){
		buf=buf+str[i];
		if(toint(buf)%(int)pow(2,k)==0){
			buf=="";
			k++;
		}
	}
	
	k--;
	
	cout<<k;
    
    return 0;
}

