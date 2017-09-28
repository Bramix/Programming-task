#include <iostream>
#include <Math.h>
#include <cstdio>
using namespace std;

int zifra(char c){
          if(c=='I'){
              return 1;            
          }
          
          else if(c=='V'){
               return 5;            
          }
          
          else if(c=='X'){
                   return 10;          
          }
          
          else if(c=='L'){
               return 50;            
          }
          
          else if(c=='C'){
                   return 100;          
          }
          
          else if(c=='D'){
               return 500;            
          }
          
          else if(c=='M'){
                   return 1000;          
          }
          
}

int chislo(string str){
    int i,res=0,buf;
    for(i=0;i<str.size();i++){
          buf=zifra(str[i]);
          if(buf>res){
             res=abs(res-buf);
          }
          else{
               res=res+buf;
          }
    }
    return res;
}

int main(){
    int n,i;
    //ifstream in("in.txt");
    //ofstream on("out.txt");
    
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    
    cin>>n;
    string str;
    
    int *m=new int[n];
    for(i=0;i<n;i++){
        cin>>str;
        m[i]=chislo(str);
    }
    
    for(i=0;i<n;i++){
        cout<<m[i]<<endl;
    }
    
    
   // in.close();
    //on.close();
    return 0;
}
