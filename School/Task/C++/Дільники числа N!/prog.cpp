#include <iostream>
using namespace std;

int main(){
    int n,i,k=0;
    long l=1;
    cin>>n;
    for(i=2;i<=n;i++){
          l=l*i;                  
    }
    for(i=1;i<=l;i++){
          if(l%i==0){
                k++;     
          }            
    }
    
    cout<<k;
    cin>>k;
    
    return 0;
    
}
