#include <iostream>
using namespace std;

void in_on(int n) {
	if(n == 0) return;
	int k;
	cin >> k;
	in_on(n - 1);
	cout << k << endl;
}
 
int main() {
	int n; cin >> n;
	in_on(n);
	return 0;
}