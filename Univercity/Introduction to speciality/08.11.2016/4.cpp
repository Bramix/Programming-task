#include <stdio.h>

int main(){
	int a, res = 0, buf = 1;
	scanf("%d", &a);

	while(a > buf){
        buf = buf * 2;
        res++;
        if(a == buf){
            printf("%d", res);
            return 0;
        }
	}

	printf("False");

	return 0;
}