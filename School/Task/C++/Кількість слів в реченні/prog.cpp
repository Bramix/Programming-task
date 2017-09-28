#include <iostream>
#include <Math.h>
#include <vector>
using namespace std;

int main(){ 
    string str,buf="";
    int i,r=0;
    vector <string> sl;
    getline(cin,str);
    
    
    for(i=0;i<str.size();i++){
          if(str[i]==' '){
              sl.push_back(buf);
              buf="";         
          }
          else{
              buf=buf+str[i]; 
              if(i==str.size()-1){
                 sl.push_back(buf);                 
              }
          }
    }
    
    for(i=0;i<sl.size();i++){
       string str=sl[i];                      
       int n=str.size()-1;
       int res=1;
       if(str[n]=='.'||str[n]=='!'||str[n]=='?'){
           cout<<i+1-r<<endl;  
           r=i+1;                                                                                                                                    
       }                                      
    }
    
    cin>>str;
    
    return 0;
}
