#include <iostream>
#include <vector>
using namespace std;

int main(){ 
    string str,buf="";
    int i;
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
       int n=str.size()-2;
       int res=1;
       if(str[n]=='e'||str[n]=='y'||str[n]=='u'||str[n]=='i'||str[n]=='o'||str[n]=='a'){
           res=0;                                                                                                                                      
       }                       
                             
       if(res==0){
                             
       }   
       else{
           cout<<sl[i]<<" "; 
       }                 
    }
    
    return 0;
}
