#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    int n,i,buf1=1,buf2=1,res=0;
    
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    
    cin>>n;
    
    if(n==1||n==2){
         res=1;
    }
    
    for(i=2;i<n;i++){
        res=buf1+buf2;
        buf1=buf2;
        buf2=res;             
    }
    cout<<res;
    return 0;
}
