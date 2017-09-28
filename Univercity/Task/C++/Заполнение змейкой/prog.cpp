#include <iostream>
using namespace std;
 
int main() {
	int n, m, k = 0, buf, j;
	cin >> n >> m;
	
	for(int i = 0; i < n; i++) {
		if(i % 2 == 0) {
			for(j = 0; j < m; j++) {
				cout << k << " ";
				k++;
			}
		}
		else {
			buf = k;
			for(j = buf + m - 1; j >= buf; j--) {
				cout << j << " ";
				k++;
			}
		}
		cout << endl;
	}

	return 0;
}