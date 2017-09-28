#include <stdio.h>
#include <math.h>
#include <iostream>
#include <stdlib.h>
using namespace std;
 
 
void solve(float a,float b, float c){
    char buf='1';
    if(a==0){
        buf='0';
    }
	switch(buf){
		case '0':{
			float x=-c/b;
			printf("x=%f\n\n",x);
			break;
		}
		default:{
			float D=b*b-4*a*c;
 
			printf("D=%f\n",D);
			if(D<0){
				printf("ERROR D<0\nPlease try again\n");
			}
			else if(D==0){
				float x;
				x=(-b)/(2*a);
				printf("x=-b/2a=%f\n\n",x);
			}
			else{
				float x1,x2;
				x1=(-b-sqrt(D))/(2*a);
				x2=(-b+sqrt(D))/(2*a);
				printf("x1=(-b-sqrt(D))/(2a)=%f\nx2=(-b+sqrt(D))/(2a)=%f\n\n",x1,x2);
			}
		}
	}
}
 
string cut(string str){
    string res="";
    for(int i=0;i<str.size();i++){
        if(str[i]=='x'){
           break;
        }
        else{
            res=res+str[i];
        }
    }
 
    if(res.size()==0){
        res="1";
    }
    if(res=="-"){
        res="-1";
    }
 
    return res;
}
 
int main(){
    string str="",buf;
    string number[3]={"","",""};
    int k=0;
    float a=0,b=0,c=0;
    getline(cin,str);
 
    for(int i=0;i<str.size();i++){
        if(str[i]=='+'||(i>0&&str[i]=='-')){
            k++;
            number[k]=number[k]+str[i];
        }
        else if(str[i]=='='){
            break;
        }
        else{
 
            number[k]=number[k]+str[i];
        }
    }
 
    for(int i=0;i<3;i++){
        buf=number[i];
        if(buf[buf.size()-1]=='2'&&buf[buf.size()-2]=='^'){
            buf=cut(buf);
            a = strtod(buf.c_str(), 0);
        }
        else if(buf[buf.size()-1]=='x'){
            buf=cut(buf);
            b = strtod(buf.c_str(), 0);
        }
        else if(buf!=""){
            c = strtod(buf.c_str(), 0);
        }
    }
 
    solve(a,b,c);
 
	return 0;
}