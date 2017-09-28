#include <iostream>
#include <vector>
using namespace std;


int pl(int str){
	int res=1,i;
	
	vector <char>c;
	
	while(str>=1){
		c.push_back(str%10);
		str=str/10;
	}
	
	for(i=0;i<c.size();i++){
		if(c[i]==c[c.size()-1-i]){
			res=1;
		}
		else{
			res=0;
			break;
		}
	}
	
	return res;
}

int main(){
	freopen("Input.txt","r",stdin);
	freopen("Output.txt","w",stdout);
	int str;
	cin>>str;
	
	while(pl(str)==0){
		str++;
	}
	
	
	cout<<str;
	
	return 0;
}
