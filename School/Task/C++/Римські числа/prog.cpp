#include <iostream>
#include <cmath>
using namespace std;

int toArab(string str){
	int res=0,i,a,ch=0;
	for(i=str.size()-1;i>=0;i--){
		switch(str[i]){
			case 'I':{
				a=1;
				break;
			}
			case 'V':{
				a=5;
				break;
			}
			case 'X':{
				a=10;
				break;
			}
			case 'L':{
				a=50;
				break;
			}
			case 'C':{
				a=100;
				break;
			}
			case 'D':{
				a=500;
				break;
			}
			case 'M':{
				a=1000;
				break;
			}
		}
		
		if(a>=ch){
			res=res+a;
		}
		
		else{
			res=res-a;
		}
		
		ch=a;
		
	}
	return res;
}

string toRom(int n){
	string res="";
	int i=0;
	int Ar[]={1000,900,500,400,100,90,50,40,10,9,5,4,1};
	string R[]={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
	while(true){
		if(n>=Ar[i]){
			n=n-Ar[i];
			res=res+R[i];
		}
		else{
			i++;
		}
		
		if(n==0)
		break;
	}
	return res;
}

int main(){   
	string str,p="";
	int i,j=0;
	int ch[2];
	cin>>str;
	
	str=str+"+";
		
	for(i=0;i<str.size();i++){
		if(str[i]=='+'){
			ch[j]=toArab(p);
			j++;
			p="";
		}
		else{
			p=p+str[i];
		}
	}
	
	cout<<toRom(ch[0]+ch[1]);
    
    return 0;
}
