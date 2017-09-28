#include <iostream>
#include <Math.h>
using namespace std;

int main(){
    string str,rts,rs,result="NO";
    int i,j;
    cin>>str>>rts;
    for(i=0;i<rts.size();i++){
        str=str+str;                      
    }
    
    for(i=0;i<str.size();i++){
         rs="";
         for(j=i;j<str.size();j++){
              rs=rs+str[j];
              if(rs==rts){
                  result="YES";
                  break;
              }
         }
    
    }
    
    if(result=="YES"){
    }
    
    else{
         for(i=0;i<str.size();i++){
         rs="";
         for(j=str.size()-1-i;j>=0;j--){
              rs=rs+str[j];
              if(rs==rts){
                  result="YES";
                  break;
              }
         }
    
    }
    
    }
    
    
    
    cout<<result;
    
    return 0;   
}
