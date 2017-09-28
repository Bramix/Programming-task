#include<fstream>
#include<vector>
#include<Math.h>
using namespace std;

int toint(string str){
	int res=0,i;
	for(i=0;i<str.size();i++){
		res=res+(str[i]-'0')*pow(10,str.size()-i-1);
	}
	return res;
}

int nk(int n){
	int res;
	
	if(n==1){
		res=4;
	}
	if(n==2){
		res=7;
	}
	if(n==3){
		res=9;
	}
	
	if(n>3){
		res=4*n-n;
	}
	
	return res;
}

int main(){

	ofstream on("Input.txt",ios::app);
	on<<endl;
	on.close();
	
	int n,i,k;
	
	ifstream cin("Input.txt");
	ofstream cout("Output.txt");
	vector <string> str;
	string buf=" ";
	do{
		getline(cin,buf);
		if(buf.size()>0){
			str.push_back(buf);
		}
		else{
			break;
		}
	}
	while(buf!="\n");
	
	n=str.size();
	for(i=0;i<n;i++){
		k=toint(str[i]);
		k=nk(k);
		cout<<k<<endl;
	}
	
	
	cin.close();
	cout.close();
		
	return 0;
}
