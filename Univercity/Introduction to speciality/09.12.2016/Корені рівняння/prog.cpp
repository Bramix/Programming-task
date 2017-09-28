#include <iostream>
using namespace std;
 
int main() {
	double a, b, c, d; cin >> a >> b >> c >> d;
	if(a == 0 && b != 0) cout << 0;
	else if(a == 0 && b == 0) cout << 1000;
	else {
		double x = -b / a;
		double ch = a*x + b;
		double zn = c*x + d;
		double k = a / c;
		if(zn == 0 || k * ch == zn) cout << 0;
		else cout << 1;
	}
	return 0;
}