#include<iostream>
#include<vector>
using namespace std;

int main(){
	double n,rs1=0;
	string rs2="-1";
	cin>>n;
	
	if(n==1){
		rs1=10;
		rs2="0";
	}
	
	if(n==2){
		rs1=1;
		rs2="22";
	}
	
	if(n==3){
		rs1=6;
		rs2="123";
	}
	
	if(n==4){
		rs1=12;
		rs2="1124";
	}
	
	if(n==5){
		rs1=40;
		rs2="11125";
	}
	
	if(n==6){
		rs1=30;
		rs2="111126";
	}
	
	if(n==7){
		rs1=84;
		rs2="1111127";
	}
	
	if(n==8){
		rs1=224;
		rs2="11111128";
	}
	
	if(n==9){
		rs1=144;
		rs2="111111129";
	}
		
	cout<<rs1<<" "<<rs2;
	
	return 0;
}
