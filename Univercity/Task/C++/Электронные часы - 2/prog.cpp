#include <stdio.h>

int main() {
    int N, c, a, b;
    scanf("%d", &N);
    a = N / 3600;
    b = (N - a * 3600) / 60;
    c = N - b * 60 - a * 3600;  
    while(a >= 24) a = a - 24;
    printf("%d:", a);
    if(b < 10) printf("0%d:", b);
    else printf("%d:", b);
    if(c < 10) printf("0%d", c);
    else printf("%d", c);
   
    return 0;
}