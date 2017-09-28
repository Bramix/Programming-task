#include <fstream>
#include <vector>
#include <Math.h>
#include <iomanip>
using namespace std;

int main(){
	ofstream dop("Input.txt",ios::app);
	dop<<endl;
	dop.close();
	
	ifstream cin("Input.txt");
	ofstream cout("Output.txt");
	
	vector <string> str;
	string buf=" ";
	double P,S,a,b,c;
	do{
		getline(cin,buf);
		if(buf.size()>0){
			str.push_back(buf);
		}
		else{
			break;
		}
	}
	while(buf!="\n");
	
	a=str.size();
	b=str[str.size()-1].size();
	c=sqrt(a*a+b*b);
	P=a+b+c;
	
	S=sqrt((P/2)*(P/2-a)*(P/2-b)*(P/2-c));
	
	cout<<fixed<<setprecision(2)<<"S = "<<S<<endl;
	cout<<fixed<<setprecision(2)<<"P = "<<P;
	
	cin.close();
	cout.close();
	return 0;
}
