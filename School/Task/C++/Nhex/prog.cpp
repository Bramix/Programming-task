#include <iostream>
using namespace std;

double pow(int m,int n){
	double res=1;
	int i;
	for(i=0;i<n;i++){
		res=res*m;
	}
	return res;
}

int main(){
	int res=0,i,n;
	string str;
	cin>>n;
	cin>>str;
	
	for(i=0;i<str.size();i++){
		if('0'<=str[i]&&str[i]<='9'){
			res=res+str[i]-'0'*pow(n,str.size()-i-1);
		}
		if(str[i]=='A'){
			res=res+10*pow(n,str.size()-i-1);
		}
		
		if(str[i]=='B'){
			res=res+11*pow(n,str.size()-i-1);
		}
		
		if(str[i]=='C'){
			res=res+12*pow(n,str.size()-i-1);
		}
		
		if(str[i]=='D'){
			res=res+13*pow(n,str.size()-i-1);
		}
		
		if(str[i]=='E'){
			res=res+14*pow(n,str.size()-i-1);
		}
		
		if(str[i]=='F'){
			res=res+15*pow(n,str.size()-i-1);
		}
	}
	
	cout<<res;
	
	return 0;
}
