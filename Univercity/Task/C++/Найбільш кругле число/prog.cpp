#include <iostream>
using namespace std;

int n_zero(int);

int main() {
	int n; cin >> n;
	int i, n_max = 0, n_num = 0, buf;
	int res;
	for(i = 0; i < n; i++) {
		cin >> buf;
		if(i == 0) res = buf;
		n_num = n_zero(buf);
		if(n_num > n_max) {
			n_max = n_num;
			res = buf;			
		}
		if(n_num == n_max && buf < res) res = buf;
	}
	cout << res;
	return 0;
}

int n_zero(int n) {
	int res = 0;
	while(n % 10 == 0) {
		res++;
		n /= 10;
	}
	return res;
}
