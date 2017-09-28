#include <iostream>
using namespace std;
 
int main() {
	int n, m; cin >> n >> m;
	int sum = 0, res1 = 0, res2 = 0;
	int buf;

	for(int i = 0; i < n; i++) {
		sum = 0;
		for(int j = 0; j < m; j++) {
			cin >> buf;
			sum += buf;
		}
		if(sum > res2) {
			res2 = sum;
			res1 = i;
		}
	}

	cout << res2 << " " << res1;

	return 0;
}