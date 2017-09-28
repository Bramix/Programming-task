#include <stdio.h>

int main(){

	float x, y;
	float res1, res2, res3, res6;
	int res4, res5;
	int xInt;
	const char c = '%';

	printf("\n___Умова___\n");
	printf("1)7x+3\n");
	printf("2)12(x+1)\n");
	printf("3)12/x\n");
	printf("4)[12/x]\n");
	printf("5)12%cx\n",c);
	printf("*6)x(y+3)\n");

	printf("\n-----\n");
	printf("Введiть x=");
	scanf("%f",&x);
	printf("Введiть y=");
	scanf("%f",&y);
	printf("\n-----\n");

	res1 = 7 * x + 3;
	res2 = 12 * (x + 1);
	res3 = 12 / x;
	res4 = res3;
	xInt = x;
	res5 = 12 % xInt;
	res6 = x * (y + 3);

	printf("\n___Рiшення___\n");
	printf("1)7x+3=7*%f+3=%f+3=%f\n",x,7*x,res1);
	printf("2)12(x+1)=12(%f+1)=12*(%f)=%f\n",x,x+1,res2);
	printf("3)12/x=12/%f=%f\n",x,res3);
	printf("4)[12/x]=[12/%f]=[%f]=%d\n",x,res3,res4);
	printf("5)12%cx=12%c%d=%d\n",c,c,xInt,res5);
	printf("*6)x(y+3)=%f(%f+3)=%f*%f=%f\n",x,y,x,y+3,res6);

	return 0;
}