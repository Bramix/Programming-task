#include <stdio.h>

int abc(int n){
    int res=n;
    if(res<0){
        res=-1*res;
    }
    return res;
}

int main(){
    int x1,y1,x2,y2;

    scanf("%d%d%d%d",&x1,&y1,&x2,&y2);

    if(x1==0||x2==0||y1==0||y2==0){
        printf("Error");
    }

    else{
        int kx1=x1/abc(x1);
        int kx2=x2/abc(x2);
        int ky1=y1/abc(y1);
        int ky2=y2/abc(y2);
        if(kx1==kx2&&ky1==ky2)
        printf("Yes");
        else
        printf("No");
    }

    return 0;
}