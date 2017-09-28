#include <iostream>
using namespace std;
 
int main() {
	int n; cin >> n;
	long sum = 0;
	int i = n;
	while(i != 1) {
		i--;
		sum += i;
	}
	cout << sum;
	return 0;
}