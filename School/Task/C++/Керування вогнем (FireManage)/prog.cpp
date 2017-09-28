#include <iostream>
using namespace std;

int main(){
	string str,res="";
	int i,j;
	cin>>str;
	for(i=0;i<str.size();i++){
		res=res+str[i];
		for(j=0;j<str[i]-'0';j++){
			res=res+str[i];
		}
	}
	cout<<res;
	return 0;
}
