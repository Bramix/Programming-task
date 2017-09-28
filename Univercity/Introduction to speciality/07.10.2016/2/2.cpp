#include <stdio.h>
#define true 1
#define false 0

int min_dil(int n){
    int i;
    for(i = 2;i<=n;i++)
        if(n % i  == 0)
        break;

    return i;
}

bool Easy(int n){
    bool res=true;
    for(int i = min_dil(n);i<n;i++)
        if(n % i == 0){
            res=false;
            break;
        }

    return res;
}

int main(){
    int n;
    scanf("%d", &n);
    if(n!=1){
        printf("Task 2: %d\n", Easy(n));
        printf("Task 3: %d\n", min_dil(n));
    }
    else{
        printf("0/");
    }

    return 0;
}