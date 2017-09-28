#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main() {
	freopen("COMPUTER.IN","r",stdin);
	freopen("COMPUTER.OUT","w",stdout);
	int n,m,k;
	cin>>n>>m>>k;
	vector <int>res;
	
	
	while(k<=n&&k<=m){
	    if(n%k==0&&m%k==0){
	        res.push_back(k);
	    }
	    k++;
	}
	
	for(int i=res.size()-1;i>=0;i--){
	    cout<<res[i]<<" ";
	}
	
	return 0;
}
