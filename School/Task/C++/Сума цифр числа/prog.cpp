#include <iostream>
#include <conio.h>
using namespace std;

int main(){
     string n;
     int res=0,i;
     cin>>n;
     
     for(i=0;i<n.size();i++){
          res=res+(n[i]-'0');                  
     }
     
     cout<<res;
     getch();
    
     return 0;
}
