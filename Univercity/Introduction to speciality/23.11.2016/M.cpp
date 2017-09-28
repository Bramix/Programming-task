#include <stdio.h> 
using namespace std; 

void print(int n){
	printf("%d ", n);
}

int read(){
	int res;
	scanf("%d", &res);
	return res;
}

void work(){
	int x, min, max;
	x = read();
	min = max = x;
	while(x != 0){
		x = read();
		if(min > x && x != 0) min = x;
		if(max < x && x != 0) max = x;
	}
	print(min);
	print(max);
}

int main(){ 
	work();
	return 0; 
}