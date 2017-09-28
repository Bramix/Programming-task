#include <fstream>
#include <Math.h>
using namespace std;

int dob(int n){
	int res=1;
	while(n>=1){
		res=res*(n%10);
		n=n/10;
	}
	
	return res;
}

int main(){
	int n,i,j,nmin,min=9999999999,j1,i1;
	ifstream in("Number.dat");
	ofstream on("Number.ans");
	in>>n;
	
	int *mas=new int[n];
	int *buf=new int[n];
	
	for(i=0;i<n;i++){
		in>>mas[i];
		buf[i]=dob(mas[i]);
	}
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(i==j){
			}
			else{
				nmin=abs(buf[i]-buf[j]);
				if(nmin<min){
					min=nmin;
					i1=i;
					j1=j;
				}
			}
		}
	}
	
	if(i1>j1){
		on<<mas[i1]<<" "<<mas[j1];
	}
	
	else{
		on<<mas[j1]<<" "<<mas[i1];
	}
	
	in.close();
	on.close();
	return 0;
}
