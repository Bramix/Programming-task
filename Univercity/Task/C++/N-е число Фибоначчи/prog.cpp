#include <iostream>
using namespace std;

int fibanachi(int n) {
	if(n == 0) return 0;
	if(n == 1) return 1;
	return fibanachi(n - 1) + fibanachi(n - 2);
}
 
int main() {
	int n; cin >> n;
	int res = fibanachi(n);
	cout << res;
	return 0;
}