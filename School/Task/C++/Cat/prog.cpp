#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	int n,i,min=99999999,max=-1,sum=0;
	cin>>n;
	int *m=new int[n];
	for(i=0;i<n;i++){
		cin>>m[i];
		if(max<m[i]){
			max=m[i];
		}
		if(min>m[i]){
			min=m[i];
		}
		sum=sum+m[i];
	}
	cout<<max<<" "<<min<<" "<<sum;
	delete []m;
	return 0;
}
