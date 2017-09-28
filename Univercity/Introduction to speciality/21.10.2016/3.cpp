#include <stdio.h>

int main() {
	int n, res1 = 0, res2, buf=1;
	const int k = 2;
	scanf("%d", &n);
	
	if(n % k != 0){
		printf("2^0*%d", n);
	}
	
	else{	
		while(n % (buf * k) == 0){
			buf = buf * k;
			res1++;
		}
		
		res2 = n / buf;
		printf("%d^%d*%d", k, res1, res2);
	}
	
	return 0;
}
