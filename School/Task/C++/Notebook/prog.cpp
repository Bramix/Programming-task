#include<iostream>
#include<vector>
using namespace std;

int main(){
	long n,i;
	cin>>n;
	vector <long> res;
	vector <long> buf;
	
	for(i=1;i<=n;i++){
		res.push_back(i);
	}
	
	while(res.size()!=1){
		for(i=0;i<res.size();i++){
			if(i%2==1)
			buf.push_back(res[i]);
		}
		res.clear();
		for(i=0;i<buf.size();i++){
			res.push_back(buf[i]);
		}
		buf.clear();
	}
	
	for(i=0;i<res.size();i++){
		cout<<res[i];
	}
	
	
	return 0;
}
