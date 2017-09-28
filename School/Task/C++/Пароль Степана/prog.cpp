#include<iostream>
using namespace std;

int main(){
	
	freopen("PASSWORD.DAT","r",stdin);
	freopen("PASSWORD.SOL","w",stdout);
	string str,res="NO";
	cin>>str;
	int i,p1,p2,p3;
	p1=p2=p3=0;
	if(str.size()>=8){
		for(i=0;i<str.size();i++){
			if('a'<=str[i]&&str[i]<='z'){
				p1=1;
			}
			else{
				if('A'<=str[i]&&str[i]<='Z'){
					p2=1;
				}
				else{
					if('0'<=str[i]&&str[i]<='9'){
						p3=1;
					}
				}
			}
		}
		
		if(p1+p2+p3==3){
			res="YES";
		}
		
	}
	cout<<res;
	
	return 0;
}
