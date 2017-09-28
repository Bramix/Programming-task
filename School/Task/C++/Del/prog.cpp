#include<iostream>
#include<vector>
using namespace std;

int main(){
	int n,m,i;
	cin>>n>>m;
	vector <int> mas;
	vector <int> buf;
	if(n>m){
		i=n;
		n=m;
		m=i;
	}
	for(i=n;i<=m;i++){
		mas.push_back(i);
	}
	
	while(mas.size()!=1){
		for(i=0;i<mas.size();i++){
			if((i+1)%2==0){
				buf.push_back(mas[i]);
			}
		}
		mas.clear();	
		for(i=0;i<buf.size();i++){
			mas.push_back(buf[i]);
		}
		buf.clear();
	}	
	
	for(i=0;i<mas.size();i++){
		cout<<mas[i];
	}
	
	return 0;
}
