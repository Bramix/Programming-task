#include <iostream>
#include <cstdio>
#include <cctype>
using namespace std;

int main(){
    int n,i;
    
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    
    cin>>n;
    
    string *first=new string[n];
    string *second=new string[n];
    
    for(i=0;i<n;i++){
          cin>>first[i]>>second[i];
          
          for(int j=0;j<first[i].size();j++){
                  first[i][j]=tolower(first[i][j]);
          }
          
          for(int j=0;j<second[i].size();j++){
                  second[i][j]=tolower(second[i][j]);
          }
    }
    
    for(i=0;i<n;i++){
          cout<<second[i]<<"."<<first[i]<<"@gmail.com"<<endl;
    }
    
    delete []first;
    delete []second;
    return 0;
}
