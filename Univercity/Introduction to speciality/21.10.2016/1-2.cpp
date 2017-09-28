#include <stdio.h>

double arithmeticProgression(double a, double d, double n){
	double res = 0;
	for(int i = 0; i < n;i++){
		res = res + a;
		a = a + d;
	}
	return res;
}

double geometricProgression(double a, double d, double n){
	double res = 0;
	for(int i = 0; i < n;i++){
		res = res + a;
		a = a * d;
	}
	return res;
}

int main() {
	double a, d, n, resultArithmeticProgression, resultGeometricProgression;
	scanf("%lf%lf%lf", &a, &d, &n);
	
	resultArithmeticProgression = arithmeticProgression(a, d , n);	
	resultGeometricProgression = geometricProgression(a, d , n);
	
	printf("Arithmetic  Progression = %lf\nGeometric Progression = %lf", resultArithmeticProgression, resultGeometricProgression);
	
	return 0;
}
