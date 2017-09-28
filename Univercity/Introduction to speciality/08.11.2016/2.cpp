#include <stdio.h>

bool easy(int n){
    if(n == 1)
        return false;

    int i = 2;
    bool res = true;

    while(i < n){
        if(n % i == 0)
            res = false;
        i++;
    }

	return res;
}

int main(){
	int a, b, res = 0;
	scanf("%d%d", &a, &b);

	while(a <= b){
        if(easy(a) == true)	res++;    
        a++;
	}
	printf("%d", res);

	return 0;
}