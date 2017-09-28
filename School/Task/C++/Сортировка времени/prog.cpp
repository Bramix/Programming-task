#include <iostream>
using namespace std;

int main(){
    int n,i,j,c;
    cin>>n;
    int mas[n][3];
    
    for(i=0;i<n;i++){
         for(j=0;j<3;j++){
              cin>>mas[i][j];            
         }            
    }
    
    for(i=0;i<n;i++){
           for(j=0;j<n;j++){
              if(mas[i][0]<mas[j][0]){
                   c=mas[j][0];
                   mas[j][0]=mas[i][0];
                   mas[i][0]=c;
                   c=mas[j][1];
                   mas[j][1]=mas[i][1];
                   mas[i][1]=c; 
                   c=mas[j][2];
                   mas[j][2]=mas[i][2];
                   mas[i][2]=c;                    
              }              
           }          
    }
    
    for(i=0;i<n;i++){
           for(j=0;j<n;j++){
              if(mas[i][0]==mas[j][0])
              if(mas[i][1]<mas[j][1]){
                   c=mas[j][0];
                   mas[j][0]=mas[i][0];
                   mas[i][0]=c;
                   c=mas[j][1];
                   mas[j][1]=mas[i][1];
                   mas[i][1]=c; 
                   c=mas[j][2];
                   mas[j][2]=mas[i][2];
                   mas[i][2]=c;                    
              }              
           }          
    }
    
    for(i=0;i<n;i++){
           for(j=0;j<n;j++){
              if(mas[i][0]==mas[j][0]&&mas[i][1]==mas[j][1])
              if(mas[i][1]<mas[j][1]){
                   c=mas[j][0];
                   mas[j][0]=mas[i][0];
                   mas[i][0]=c;
                   c=mas[j][1];
                   mas[j][1]=mas[i][1];
                   mas[i][1]=c; 
                   c=mas[j][2];
                   mas[j][2]=mas[i][2];
                   mas[i][2]=c;                    
              }              
           }          
    }
    
    for(i=0;i<n;i++){
         for(j=0;j<3;j++){
              cout<<mas[i][j]<<" ";            
         }        
         cout<<endl;    
    }
    
    cin>>i;
    
    return 0;
    
}
