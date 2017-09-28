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
	int x, i = 1, k = 1;
	x = read();
	
	while(x != 0){
		x--;
		print(i);
		k--;
		if(k == 0){
			i++;
			k = i;
		}
	}

}

int main(){ 
	work();
	return 0; 
}