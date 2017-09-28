#include <iostream>
using namespace std;

int main(){
	string res;
	int i;
	setlocale(LC_CTYPE,"utf-8");
	getline(cin,res);
	
	for(i=res.size()-1;i>=0;i--){
		cout<<res[i];
	}
	
	return 0;
}
