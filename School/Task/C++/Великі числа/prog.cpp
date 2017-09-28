#include <iostream>
#include <cstdio>
using namespace std;

int main(){
	freopen("Bigin.txt","r",stdin);
	freopen("Bigout.txt","w",stdout);
    string n,m,res="";
    int i,buf=0,size;
    char c;
    cin>>n;
    cin>>m;
    
    if(n.size()>=m.size()){
		size=n.size();
		for(i=0;i<n.size()-m.size();i++){
			res=res+'0';
		}
		m=res+m;
	}
	
	else{
		size=m.size();
		for(i=0;i<m.size()-n.size();i++){
			res=res+'0';
		}
		n=res+n;
	}
	
	i=0;
	res="";
	
	while(i!=size){
		i++;
		buf=n[size-i]-'0'+m[size-i]-'0'+buf;
		c=(buf%10)+'0';
		res=res+c;
		buf=buf/10;
		if(i==size){
			if(buf==0){
			}
			else{
				c=buf+'0';
				res=res+c;
				size++;
				break;
			}
		}
	}
	
	for(i=size-1;i>=0;i--){
		cout<<res[i];
	}
    
    return 0;
}

