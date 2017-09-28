#include<vector>
#include<fstream>
using namespace std;

string result(string res){
	int i;
	for(i=0;i<res.size();i++){
		if('a'<=res[i]&&res[i]<='z'){
			res[i]=toupper(res[i]);
		}
		else{
			if('A'<=res[i]&&res[i]<='Z'){
				res[i]=tolower(res[i]);
			}
		}
	}
	return res;
}

int main(){
	
	ofstream f("text.in",ios::app);
	f<<"\n";
	f.close();
	
	ifstream cin("text.in",ios::app);
	ofstream cout("text.out");
	
	int i;
	vector <string> res;
	string buf=" ";
	cout<<1;
	i=0;
	do{
		getline(cin,buf);
		if(buf.size()>0){
			res.push_back(buf);
			i++;
		}
		else{
			break;
		}
	}
	while(buf!="\n");
	cout<<2;
	
	for(i=0;i<res.size();i++){
		res[i]=result(res[i]);
	}
	cout<<3;
	
	for(i=0;i<res.size();i++){
		cout<<res[i]+"\n";
	}
	
	cin.close();
	cout.close();
	return 0;
}
