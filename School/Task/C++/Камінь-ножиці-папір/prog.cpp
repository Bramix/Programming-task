#include <fstream>
using namespace std;

int main(){
	ifstream cin("Input.txt");
	ofstream cout("Output.txt");
	string a,b,res="Second";
	cin>>a>>b;
	
	if(a==b){
		res="Draw";
	}	
	else{
		if(a=="stone"&&b=="shears"||a=="shears"&&b=="paper"||a=="paper"&&b=="stone"){
			res="First";
		}
	}
	cout<<res;
	
	cin.close();
	cout.close();
	
	return 0;
}
