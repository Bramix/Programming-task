#include <iostream>
#include <conio.h>
using namespace std;

int main(){
     int a,b,res;
     string str;
     cin>>a>>b>>str;
     if(str=="plus"){
            res=a+b;
     }
     
     if(str=="div"){
            res=a/b;
     }
     
     if(str=="mod"){
            res=a%b;
     }
     
     if(str=="minus"){
            res=a-b;
     }
     
     if(str=="mult"){
            res=a*b;
     }
     
     cout<<res;
     
     getch();
     
    
     return 0;
}
