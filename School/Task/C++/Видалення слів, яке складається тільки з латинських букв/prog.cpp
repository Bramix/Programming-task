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
              if(buf.size()==r){                        
              }
              else{
                  sl.push_back(buf); 
              }
              r=0;
              buf="";         
          }
          else{
               if('a'<=str[i]&&str[i]<='z'||'A'<=str[i]&&str[i]<='Z'){
                   r++;
               }
              buf=buf+str[i];
              if(i==str.size()-1){
                 if(buf.size()==r){                        
                 }
                 else{
                      sl.push_back(buf); 
                      }
                      r=0;
                      buf="";                  
                 }
          }
    }
    
    for(i=0;i<sl.size();i++){
       cout<<sl[i]<<" ";                                     
    }
    
    cin>>str;
    
    return 0;
}
