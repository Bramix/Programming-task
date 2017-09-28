#include <iostream>
using namespace std;

int main(){
    int n,i,buf;
    cin>>n;
    
    string str="2.7182818284590452353602875";
    
    if(n==0){
          cout<<3;            
    }
    else{
         for(i=0;i<=n;i++){
               cout<<str[i];
         }
         buf=str[n+2]-'0';
        if(buf>=5){
             buf=str[n+1]-'0';
             buf++;
             cout<<buf;              
         }
         else{
             buf=str[n+1]-'0'; 
             cout<<buf;
         }
                    
    }
   
    cin>>n;
    return 0;   
}
