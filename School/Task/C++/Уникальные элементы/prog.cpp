#include <iostream>
#include <set>
#include <conio.h>
using namespace std;

int main(){
    int n,i,z;
    cin>>n;
    
    set <int> m;
    
    for(i=0;i<n;i++){
         cin>>z; 
         m.insert(z);           
    }
    
    cout<<m.size();
    _getch();
    return 0;   
}
