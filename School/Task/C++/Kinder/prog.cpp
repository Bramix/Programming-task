#include<iostream>
using namespace std;

int Max(int a, int b, int c){
	int res;
	
	if(a>=b&&a>=c){
		res=a;
	}
	
	if(b>=a&&b>=c){
		res=b;
	}
	
	if(c>=a&&c>=b){
		res=c;
	}
	
	return res;
}

int Min(int a, int b, int c){
	int res;
	
	if(a<=b&&a<=c){
		res=a;
	}
	
	if(b<=a&&b<=c){
		res=b;
	}
	
	if(c<=a&&c<=b){
		res=c;
	}
	
	return res;
}

int Med(int a, int b, int c){
	int res;
	
	if((b<=a&&a<=c)||(c<=a&&a<=b)){
		res=a;
	}
	
	if((a<=b&&b<=c)||(a>=b&&b>=c)){
		res=b;
	}
	
	if((a<=c&&c<=b)||(a>=c&&c>=b)){
		res=c;
	}
	
	return res;
}

int main(){
	int K,C,D,R,res=0,p1,p2,p3;
	cin>>K>>C>>D>>R;
	
	p1=Max(C,D,R);
	p2=Min(C,D,R);
	p3=Med(C,D,R);
	
	C=p1;
	D=p3;
	R=p2;
	
	p1=p2=p3=0;
	
	if(K>C&&K>D&&K>R){
		
	}
	
	else{
		while(K>0){
			if(C>0){
				p1++;
				C--;
			}
			if(p1==K){
				break;
			}
			if(D>0){
				p2++;
				D--;
			}
			if(p2==K){
				break;
			}
			if(R>0){
				p3++;
				R--;
			}
			if(p3==K){
				break;
			}
		}
	}
	
	res=p1+p2+p3;
	
	cout<<res;
	
	return 0;
}
