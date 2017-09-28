#include <iostream>
#include <vector>
using namespace std;

int main(){
	int n,m,i;
	cin>>n>>m;
	vector <char> res;
	while(m>=1){
		if(m%n<10){
			res.push_back((m%n)+'0');
		}
		
		if(m%n==10){
			res.push_back('A');
		}
		
		if(m%n==11){
			res.push_back('B');
		}
		
		if(m%n==12){
			res.push_back('C');
		}
		
		if(m%n==13){
			res.push_back('D');
		}
		
		if(m%n==14){
			res.push_back('E');
		}
		
		if(m%n==15){
			res.push_back('F');
		}
		
		
		m=m/n;
	}
	
	for(i=res.size()-1;i>=0;i--){
		cout<<res[i];
	}
	
	return 0;
}
