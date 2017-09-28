#include<iostream>
#include<cstdio>
using namespace std;

int main(){
	freopen("RECT.DAT","r",stdin);
	freopen("RECT.SOL","w",stdout);
	
	int x1,y1,x2,y2,x3,y3,x4,y4,i;
	string res="NO";
	
	cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
	
	if((x1<=x3&&x3<=x2&&y1<=y3&&y3<=y2)||((x1<=x4&&x4<=x2&&y1<=y4&&y4<=y2))){
		res="YES";
	}
	
	cout<<res;
	
	return 0;
}
