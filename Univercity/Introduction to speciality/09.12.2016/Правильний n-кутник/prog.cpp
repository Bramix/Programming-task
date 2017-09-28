#include <iostream>
using namespace std;

int cut(int);
 
int main() {
	int n; cin >> n;
	int res = cut(n);
	cout << res;
	return 0;
}

int cut(int n) {
	return 180 - 180*(n-2)/n;
}