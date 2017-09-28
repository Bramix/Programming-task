#include <stdio.h>

int main(){
    int x1,y1,k1[]={1,-1},k2[]={2,-2};
    scanf("%d%d",&x1,&y1);
    for(int i=0;i<2;i++)
    for(int j=0;j<2;j++){
        if(1<=x1+k1[i]&&x1+k1[i]<=8&&1<=y1+k2[j]&&y1+k2[j]<=8)
        printf("%d;%d\n",x1+k1[i],y1+k2[j]);
        if(1<=x1+k2[i]&&x1+k2[i]<=8&&1<=y1+k1[j]&&y1+k1[j]<=8)
        printf("%d;%d\n",x1+k2[i],y1+k1[j]);
    }

    return 0;
}