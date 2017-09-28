#include<iostream>
#include<vector>
#include<set>
using namespace std;

int min(int x[],int n,int k){
	int res=x[k],i;
	for(i=k;i<n;i++){
		if(x[i]<res){
			res=x[i];
		}
	}
	return res;
}

int max(int x[],int n,int k){
	int res=x[k],i;
	for(i=k;i<n;i++){
		if(x[i]>res){
			res=x[i];
		}
	}
	return res;
}

int main(){
	int x[4],y[4],i,res=0;
	for(i=0;i<4;i++){
		cin>>x[i]>>y[i];
	}
	
	vector <int>l1;
	vector <int>l2;
	set<int> l;
	
	for(i=min(x,2,0);i<max(x,2,0);i++){
		l1.push_back(i);
		l.insert(i);
	}
	
	for(i=min(x,4,2);i<max(x,4,2);i++){
		l2.push_back(i);
		l.insert(i);
	}
	
	res=l1.size()+l2.size()-l.size();
	if(max(x,4,2)<min(x,2,0)||(max(x,2,0)<min(x,4,2))){
		res=-1;
	}
	
	cout<<res;
	
	return 0;
}
