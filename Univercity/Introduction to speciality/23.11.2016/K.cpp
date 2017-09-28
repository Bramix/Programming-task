#include <stdio.h> 
using namespace std; 

void print(int n){
	printf("%d\n", n);
}

int read(){
	int res;
	scanf("%d", &res);
	return res;
}

int sum(int x){
	int res = 0;
	while(x > 0){
		res = res + x % 10;
		x = x / 10;
	}
	return res;
}

void work(){
	int x, res;
	x = read();
	res = sum(x);
	print(res);
}

int main(){ 
	work();
	return 0; 
}