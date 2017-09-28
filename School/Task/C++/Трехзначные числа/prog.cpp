#include <iostream>
#include <conio.h>
using namespace std;

int main(){
    
    int n,i,j,q,k=0;
    cin>>n;
    
    for(i=1;i<=n;i++){
           for(j=0;j<=n;j++){
                  for(q=0;q<=n;q++){
                       if(i+j+q<1000){
                          if(n==i+j+q&&i<10&&j<10&&q<10){
                              k++;     
                          }         
                       }
             
                  }  
                    
           }           
    }
    
    cout<<k<<endl;
    
    for(i=1;i<=n;i++){
           for(j=0;j<=n;j++){
                  for(q=0;q<=n;q++){
                                    
                       if(n==i+j+q&&i<10&&j<10&&q<10){
                              cout<<i<<j<<q<<endl;      
                       }             
                  }           
           }           
    }
    
    _getch();
    
    return 0;   
}
