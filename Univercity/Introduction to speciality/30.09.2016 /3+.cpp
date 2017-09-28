#include <stdio.h>

void Result(int x[],int y[]){
    for(int i=0;i<2;i++){
        if(1<=x[i]&&x[i]<=8)
        for(int j=0;j<2;j++){
            if(1<=y[j]&&y[j]<=8){
                printf("%d;%d\n",x[i],y[j]);
            }
        }
    }
}

int main(){
    int x1,y1;
    scanf("%d%d",&x1,&y1);
    int xa[]={x1+1,x1-1},xb[]={x1+2,x1-2};
    int ya[]={y1+2,y1-2},yb[]={y1+1,y1-1};
    Result(xa,ya);
    Result(xb,yb);

    return 0;
}
