#include <fstream>
using namespace std;

int proste(int n){
	int k=0;
	for(int i=2;i<n;i++){
		if(n%i==0){
			k++;
		}
	}
	
	if(k==0){
		return 1;
	}
	
	else{
		return 0;
	}
	
}

int summa(int n){
	int res=0;
	while(n>=1){
		res=res+n%10;
		n=n/10;
	}
	
	return res;
}

int main(){
	int n,i,buf,k=0;
	ifstream in("number.dat");
	ofstream on("number.ans");
	in>>n;
	
	for(i=2;i<=n;i++){
		if(proste(i)==1){
			buf=summa(i);
			if(proste(buf)==1){
				k++;
			}
		}
	}
	
	on<<k;
	in.close();
	on.close();
	return 0;
}
