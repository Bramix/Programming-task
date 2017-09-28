#include <stdio.h>

void solve(int x,int y){
    if(1<=x&&x<=8&&1<=y&&y<=8)
    printf("%d;%d\n",x,y);
}

int main(){
    int x1,y1,k1[]={1,-1},k2[]={2,-2};
    scanf("%d%d",&x1,&y1);
    for(int i=0;i<2;i++)
    for(int j=0;j<2;j++){
        solve(x1+k1[i],y1+k2[j]);
        solve(x1+k2[i],y1+k1[j]);
    }

    return 0;
}