#include <stdio.h>

int main(){
    int x1,y1,p1,p2,k=0;

    scanf("%d%d",&x1,&y1);
    p1=x1+1,p2=y1+2;
    if(p1<=8&&p2<=8){
        printf("%d %d\n",p1,p2);
        k++;
    }
    p1=x1+2,p2=y1+1;
    if(p1<=8&&p2<=8){
        printf("%d %d\n",p1,p2);
        k++;
    }
    p1=x1+2,p2=y1-1;
    if(p1<=8&&p2>=1){
        printf("%d %d\n",p1,p2);
        k++;
    }
    p1=x1+1,p2=y1-2;
    if(p1<=8&&p2>=1){
        printf("%d %d\n",p1,p2);
        k++;
    }
    p1=x1-1,p2=y1-2;
    if(p1>=1&&p2>=1){
        printf("%d %d\n",p1,p2);
        k++;
    }
    p1=x1-2,p2=y1-1;
    if(p1>=1&&p2>=1){
        printf("%d %d\n",p1,p2);
        k++;
    }
    p1=x1-2,p2=y1+1;
    if(p1>=1&&p2<=8){
        printf("%d %d\n",p1,p2);
        k++;
    }
    p1=x1-1,p2=y1+2;
    if(p1>=1&&p2<=8){
        printf("%d %d\n",p1,p2);
        k++;
    }

    if(k==0){
        printf("Error");
    }

    return 0;
}