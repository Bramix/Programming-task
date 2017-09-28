#include <stdio.h>

int main(){
    float x,sum=0;
    int k=0;

    while(x!=0){
        scanf("%f",&x);
        k++;
        sum=sum+x;
    }

    printf("%f",(sum/(k-1)));

    return 0;
}
