#include <stdio.h>

int n_dil(int n){
    int res = 1, i = 1, k;

    while(n > 1){
        i++;
        if(n % i == 0){
            k = 0;
            while(n % i == 0){
                n = n / i;
                k++;
            }
            res = res * (k + 1);
        }
    }

	return res;
}

int main(){
	int a, b, res = 0;
	scanf("%d%d", &a, &b);

	while(a <= b){
        res = n_dil(a);
        printf("%d --> %d\n", a, res);
        a++;
	}

	return 0;
}