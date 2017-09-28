#include <iostream>
using namespace std;

int s(int, int, int);
int max(int, int, int);
int min(int, int, int);
 
int main() {
	int a, b, c; cin >> a >> b >> c;
	int res = s(a, b, c);
	cout << res;
	return 0;
}

int max(int a, int b, int c) {
	if(a >= b && a >= c) return a;
	if(b >= a && b >= c) return b;
	if(c >= a && c >= b) return c;
}

int min(int a, int b, int c) {
	if(a <= b && a <= c) return a;
	if(b <= a && b <= c) return b;
	if(c <= a && c <= b) return c;
}

int s(int a, int b, int c) {
	int m1 = max(a, b, c);
	int m2 = a + b + c - m1 - min(a, b, c);
	return m1 * m2;
}