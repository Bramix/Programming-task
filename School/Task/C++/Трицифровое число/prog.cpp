#include <iostream>
using namespace std;

int main(){
    int i,j,k=0;
    char buf,c;
    char mas[3];
    
    for(i=0;i<3;i++){
          cin>>mas[i];
          if(mas[i]=='0'){
               k=k+1;           
          }
    }
    
    for(i=0;i<3;i++){
        for(j=i;j<3;j++){
              if(mas[i]<mas[j]){
                     buf=mas[j];
                     mas[j]=mas[i];
                     mas[i]=buf;        
              }                
        }             
    }
    
    if(k==1){
          c=mas[1];
          mas[2]=mas[1];
          mas[1]='0';
    }
    
    if(k==2){
          mas[2]=mas[0];   
          mas[1]='0';
          mas[0]='0';
    }
    
    for(i=2;i>=0;i--)
    cout<<mas[i];
    
    cin>>i;
    
    return 0;   
}
