#include<iostream>
#include<cstdio>
#include<vector>
using namespace std;

int main(){
	freopen("Input.txt","r",stdin);
	freopen("Output.txt","w",stdout);
	
	int n,res=0,x,y,res1=0,res2=0;
	cin>>n;
	int mas[n][n];
	vector <int>k1;
	vector <int>k2;	
	
	for(x=0;x<n;x++){
		for(y=0;y<n;y++){
			cin>>mas[x][y];
		}
	}
	
	for(x=0;x<n;x++){
		for(y=0;y<n;y++){
			cin>>mas[x][y];
		}
	}
	
	x=0;
	y=0;
	
	res=res+mas[0][0];
	
	k1.push_back(1);
	k2.push_back(1);
	
	do{
		if(x==n-1||y==n-1){
			if(x==n-1){
				y++;
			}
			else{
				x++;
			}
		}
		else{
			res1=res+mas[x+1][y];
			res2=res+mas[x][y+1];
			if(res2>=res1){
				y++;
			}
			else{
				x++;
			}
		}
		res=res+mas[x][y];			
		k1.push_back(x+1);
		k2.push_back(y+1);
		if(x==n-1&&x==n-1){
			break;
		}
	}
	
	while(true);
		
	cout<<res<<endl;
	
	for(x=0;x<k1.size();x++){
		cout<<"("<<k1[x]<<","<<k2[x]<<")";
	}
		
	return 0;
}
