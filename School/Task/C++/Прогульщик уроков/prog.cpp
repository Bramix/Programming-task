#include<iostream>
#include<cstdio>
using namespace std;

int main(){
	freopen("INPUT.TXT","r",stdin);
	freopen("OUTPUT.TXT","w",stdout);
	int res=0,i;
	string str;
	char monday='t',tuesday='t',wednesday='t',thursday='t',friday='t';
	for(i=0;i<5;i++){
		cin>>str;
		if(str=="Monday"&&monday=='t'){
			res++;
			monday='f';
		}
		else if(str=="Tuesday"&&tuesday=='t'){
			res++;
			tuesday='f';
		}
		
		else if(str=="Wednesday"&&wednesday=='t'){
			res++;
			wednesday='f';
		}
		
		else if(str=="Thursday"&&thursday=='t'){
			res++;
			thursday='f';
		}
		
		else if(str=="Friday"&&friday=='t'){
			res++;
			friday='f';
		}
		
	}
	
	cout<<res;
		
	return 0;
}
