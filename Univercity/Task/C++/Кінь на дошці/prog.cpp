#include <stdio.h>

int xy[8][8],k=0;
const int k1[]={1,-1},k2[]={2,-2};

void solve(int x,int y,int k){
    if(0<=x&&x<=7&&0<=y&&y<=7&&xy[x][y]==-1){
        xy[x][y]=k+1;
    }
}

void add(int x1, int y1,int k){
    for(int i=0;i<2;i++)
    for(int j=0;j<2;j++){
        solve(x1+k1[i],y1+k2[j],k);
        solve(x1+k2[i],y1+k1[j],k);
    }
}

bool test(){
    bool res=true;
    for(int i=0;i<8;i++)
    for(int j=0;j<8;j++){
        if(xy[i][j]==-1||xy[7-i][7-j]==-1){
            res=false;
            break;
        }
    }
    return res;
}

void path(){
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            if(xy[i][j]==k){
                add(i,j,k);
            }
        }
    }
    k++;
    if(test()==false)
    return path();
}

int main(){
    int x1,y1;
    for(int i=0;i<8;i++)
    for(int j=0;j<8;j++){
        xy[i][j]=-1;
    }
    scanf("%d%d",&x1,&y1);
    xy[x1-1][y1-1]=0;
    path();
    printf("\n   1 2 3 4 5 6 7 8\n");
    printf("   ---------------\n");
    for(int i=0;i<8;i++){
        printf("%d| ",i+1);
        for(int j=0;j<8;j++){
            printf("%d ",xy[i][j]);

        }
        printf("\n");
    }

    return 0;
}
