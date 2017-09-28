#include <stdio.h>

int main(){
    int x1,x2;
    scanf("%d%d",&x1,&x2);

    while(x1<=x2){
        printf("%d ",(2*x1*x1));
        x1++;
    }

    return 0;
}