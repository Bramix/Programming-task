#include <stdio.h>

int main(){
    int x,k=0;

    while(x!=0){
        scanf("%d",&x);
        if(x%2==0 && x!=0)
        k++;
    }

    printf("%d",k);

    return 0;
}