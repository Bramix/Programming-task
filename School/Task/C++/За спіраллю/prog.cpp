#include <fstream>
using namespace std;

int main(){
	ifstream cin("Input.txt");
	ofstream cout("Output.txt");
	int i,j,n,m,x=0,y=0,k=0,oper=1,p1,p2,t=1;
	cin>>n>>m;
	int xx=n,yy=m;
	cin>>p1>>p2;
	int mas[n][m];
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			mas[i][j]=0;
		}
	}
	
	int xp=0,yp=0;
	
	while(true){
		if(k==xx*yy){
			break;
		}
		k++;
		mas[x][y]=k;
		if(oper==1){
			x++;
			if(x==n-1){
				oper=2;
				xp++;
			}
		}
		else if(oper==2){
			y++;
			if(y==m-1){
				oper=3;
				m--;
			}
		}
		
		else if(oper==3){
			x--;
			if(x==yp){
				oper=4;
				n--;
			}
		}
		
		else if(oper==4){
			y--;
			if(y==xp){
				oper=1;
				yp++;
			}
		}
		
	}
	
	cout<<mas[p1-1][p2-1];
	
	cin.close();
	cout.close();
	
	return 0;
}
