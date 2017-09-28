#include <iostream>
using namespace std;

int main() {
	int n, m; cin >> n >> m;
	int res = 0, sum_max = 0, sum_buf = 0, l = 0, lm = 0;
	int j;
	int buf;
	for(int i = 0; i < n; i++) {
		sum_buf = 0;
		l = 0;
		for(j = 0; j < m; j++) {
			cin >> buf;
			sum_buf += buf;
			if(buf > l) l = buf;
		}
		if(lm < l) {
			res = i;
			lm = l;
			sum_max = sum_buf;
		}
		else if(lm == l && sum_buf > sum_max) {
			res = i;
			sum_max = sum_buf;
		}
	}

	cout << res;
}
