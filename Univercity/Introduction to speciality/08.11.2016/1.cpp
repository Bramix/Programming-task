#include <stdio.h>

int fibanachi(int n){
	int res;
	int p1 = 1, p2 = 1;
	
	if(n == 1 || n == 2){
		res = 1;
	}

	else{
		for(int i = 0; i < n - 2; i++){
			res = p1 + p2;
			p1 = p2;
			p2 = res;
		}
	}

	return res;
}

int main(){
	int n, res;
	scanf("%d", &n);
	res = fibanachi(n);
	printf("%d", res);

	return 0;
}