#include <iostream>
using namespace std;

int main(){
    int n,i,k=0,buf=0;
    cin>>n;
    
    for(i=2;i<=n;i++){
         buf=0;
         k=0;
         while(n%i==0){
              k++;  
              n=n/i; 
              buf=1;      
         }  
         if(buf==1){
                    if(k==1){
                       cout<<i;      
                    }
                    else
                    cout<<i<<"^"<<k;      
         }    
         if(n==1){
              break;    
              cout<<endl;
         } 
         if(k!=0)
         cout<<"*";   
    }
    cin>>i;
    return 0;   
}
