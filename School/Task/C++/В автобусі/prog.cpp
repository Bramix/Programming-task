#include <fstream>
#include <cmath>
using namespace std;

int main(){
	ifstream cin("Input.txt");
	ofstream cout("Output.txt");
	int n,m,min,max;
	cin>>n>>m;
	
	if(n==0){
		cout<<"Impossible";
	}
	
	else{
		min=n+abs(n-m);
		max=n+m-1;
		cout<<min<<" "<<max;
	}
	
	cin.close();
	cout.close();
	
	return 0;
}
