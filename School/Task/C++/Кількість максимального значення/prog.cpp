#include <iostream>
#include <conio.h>
using namespace std;

int max(int mas[],int N){
    int i,res;
    res=mas[i];
    for(i=1;i<N;i++){
          if(mas[i]>res){
              res=mas[i];           
          }           
    }
    return res;
}

int main(){
     int n,i,k=0,t;
     cin>>n;
     int *mas=new int[n];
     for(i=0;i<n;i++){
            cin>>mas[i];         
     }
     
     t=max(mas,n);
     
     for(i=0;i<n;i++){
         if(t==mas[i]){
            k++;                    
         }      
     }
     
     cout<<k;
     
     getch();
    
     return 0;
}
