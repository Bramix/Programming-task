#include <stdio.h>

int main(){
    int a1,b1,a2,b2;
    scanf("%d%d%d%d",&a1,&b1,&a2,&b2);

    if(a1*100+b1>a2*100+b2){
        printf("Error");
    }
    else{
        if(b1>b2){
            printf("%d %d", a2-1-a1,b2+100-b1);
        }
        else{
            printf("%d %d", a2-a1,b2-b1);
        }
    }


    return 0;
}