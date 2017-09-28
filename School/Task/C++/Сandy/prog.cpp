#include<iostream>
using namespace std;

int tf(int b1,int b2,int b3,int Z){
	int res=1,buf;
	buf=b1-b2;
	if(buf>Z){
		res=0;
	}
	buf=b3-b2;
	if(buf>Z){
		res=0;
	}
	buf=b1-b3;
	if(buf>Z){
		res=0;
	}
	
	return res;
}

int max(int b1,int b2,int b3){
	int res;
	if(b1>=b2&&b1>=b3){
		res=b1;
	}
	else if(b2>=b1&&b2>=b3){
		res=b2;
	}
	else if(b3>=b1&&b3>=b2){
		res=b3;
	}
	return res;
}

int min(int b1,int b2,int b3){
	int res;
	if(b1<=b2&&b1<=b3){
		res=b1;
	}
	else if(b2<=b1&&b2<=b3){
		res=b2;
	}
	else if(b3<=b1&&b3<=b2){
		res=b3;
	}
	return res;
}

int med(int b1,int b2,int b3){
	int res;
	if((b1<=b2&&b1>=b3)||(b1>=b2&&b1<=b3)){
		res=b1;
	}
	else if((b2<=b1&&b2>=b3)||(b2>=b1&&b2<=b3)){
		res=b2;
	}
	else if((b3<=b2&&b3>=b1)||(b1>=b2&&b2<=b3)){
		res=b3;
	}
	return res;
}

int main(){
	
	int res=0,i,b1,b2,b3,Z=0,bb1,bb2,bb3;
	cin>>b1>>b2>>b3;
	cin>>Z;
	bb1=max(b1,b2,b3);
	bb2=min(b1,b2,b3);
	bb3=med(b1,b2,b3);
		
	while(tf(bb1,bb2,bb3,Z)==0){
		res++;
		bb1=max(bb1,bb2,bb3);
		bb2=min(bb1,bb2,bb3);
		bb3=med(bb1,bb2,bb3);
		
		bb1--;
		bb2++;
		
		if(bb2<=0||bb1<=0||bb3<=0){
			res=-1;
			break;
		}
		
	}
		
	cout<<res;
	
	return 0;
}
