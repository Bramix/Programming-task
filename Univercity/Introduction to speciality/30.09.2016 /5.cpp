#include <stdio.h>
#include <math.h>

int revers(int n){
    int res=0,k=0,m=0;

    res=n;
    while(res>0){
        res=res/10;
        m++;
    }

    while(n>0){
        k++;
        res=res+((n%10)*pow(10,m-k));
        n=n/10;
    }
    return res;
}

int main(){
    int n;
    scanf("%d",&n);
    printf("%d",revers(n));

    return 0;
}