#include <stdio.h> 
using namespace std; 

void print(int n){
	printf("%d \n", n);
}

int read(){
	int res;
	scanf("%d", &res);
	return res;
}

void work(){
	int n = read(), res = 0, buf;

	for(int i = 0; i <= n; i++){
		for(int j = 0; j < n; j++){
			for(int q = 0; q < n; q++){
				for(int p = 0; p < n; p++){
					buf = i * 1 + j * 2 + q * 5 + p * 10; 
					if(buf == n){
						res++;
					}
				}
			}
		}
	}

	print(res);
}

int main(){ 
	work();
	return 0; 
}