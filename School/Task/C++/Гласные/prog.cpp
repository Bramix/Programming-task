#include <iostream>
using namespace std;

int main(){
    int k=0,i;
    string str;
    cin>>str;
    
    for(i=0;i<str.size();i++){
         if(str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'||str[i]=='Y'){
                k++;                                                                         
         }                     
    }
    
    cout<<k;
    cin>>k;
    
    return 0;
    
}
