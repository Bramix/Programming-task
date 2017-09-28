#include<fstream>
#include<vector>
#include<Math.h>
using namespace std;

int toint(string str){
	int res=0,i;
	for(i=0;i<str.size();i++){
		res=res+(str[i]-'0')*pow(10,str.size()-1-i);
	}
	return res;
}

int fact(int str){
	int res=1,n=1;
	while(str>res){
		n++;
		res=res*n;
	}
	return n;
}

int main(){

	ofstream on("Input.txt",ios::app);
	on<<endl;
	on.close();
	
	ifstream cin("Input.txt");
	ofstream cout("Output.txt");
	
	vector <string> str;
	int n,i,k;
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
		cout<<fact(k)<<endl;
	}
	
	cin.close();
	cout.close();
		
	return 0;
}
