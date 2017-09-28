#include <iostream>
using namespace std;

int main(){
	string str,res="YES";
	cin>>str;
	int n=(str[str.size()-1]-'0')*10+(str[str.size()-2]-'0');
	if(n>31){
		res="NO";	 
	}
	
	else{
		 n=(str[str.size()-3]-'0')*10+(str[str.size()-4]-'0');
		 if(n>12){
		 		  res="NO";	 
		 }
	}
	
	cout<<res;
	cin>>n;
	
	return 0;	
}
