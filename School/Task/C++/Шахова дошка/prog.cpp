#include <iostream>
using namespace std;

int main(){
	freopen("Input.txt","r",stdin);
	freopen("Output.txt","w",stdout);
	
	char x;
	int y,n=63,k=0;
	cin>>x>>y;
	
	int xx=(int)x-96;
	
	if(xx+1<=8&&y+2<=8){
		n--;
		k++;
	}
	
	if(xx+2<=8&&y+1<=8){
		n--;
		k++;
	}
	
	if(xx+1<=8&&y-2>=1){
		n--;
		k++;
	}
	
	if(xx+2<=8&&y-1>=1){
		n--;
		k++;
	}
	
	if(xx-2>=1&&y+1<=8){
		n--;
		k++;
	}
	
	if(xx-1>=1&&y+2<=8){
		n--;
		k++;
	}
	
	if(xx-1>=1&&y-2>=1){
		n--;
		k++;
	}
	
	if(xx-2>=1&&y-1>=1){
		n--;
		k++;
	}
	
	cout<<n<<"/"<<k;
	
	return 0;
}
