/*
1. С клавиатуры вводится 3 числа a, b, c. Найти корни уравнения a*x^2+b*x+c=0 либо сказать, что их не существует. Учесть случаи нулевого дискриминанта и а = 0.
2. С клавиатуры вводится уравнение в виде ax^2+bx+c=0 (например, 7x^2+3+2=0). Найти корни уравнения. Учесть случаи, когда коэффициенты отрицательные.
*/

#include <stdio.h>
#include <math.h>
 
void solve(float a,float b, float c){
 
	switch((int)a){
		case 0:{
			float x=-c/b;
			printf("x=%f\n\n",x);
			break;
		}
		default:{
			float D=b*b-4*a*c;
 
			printf("D=%f\n",D);
			if(D<0){
				printf("ERROR D<0\nPlease try again\n");
			}
 
			else if(D==0){
				float x;
				x=(-b)/(2*a);
				printf("x=-b/2a=%f\n\n",x);
			}
 
			else{
				float x1,x2;
				x1=(-b-sqrt(D))/(2*a);
				x2=(-b+sqrt(D))/(2*a);
				printf("x1=(-b-sqrt(D))/(2a)=%f\nx2=(-b+sqrt(D))/(2a)=%f\n\n",x1,x2);
			}
		}
	}
}
 
int main(){
 
	float a1,b1,c1;
	int a2,b2,c2;
	printf("1 way(enter a,b,c)\n\n");
	scanf("%f%f%f",&a1,&b1,&c1);
	solve(a1,b1,c1);
	printf("2 way(enter the equation format ax^2+bx+c=0)\n\n");
	scanf("%dx^2%dx%d=0",&a2,&b2,&c2);
    	solve(a2,b2,c2);
 
	return 0;
}
