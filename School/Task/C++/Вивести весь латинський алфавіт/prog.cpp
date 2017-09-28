#include <iostream>
#include <conio.h>
using namespace std;

int main(){
    char c='a';
    c=c-1;
     while(c<'z'){
          c++;
          cout<<c<<" ";        
     }
     
     cout<<endl;
     
     c='A';
    c=c-1;
     while(c<'Z'){
          c++;
          cout<<c<<" ";        
     }
     
     getch();
    
     return 0;
}
