#include <iostream>
using namespace std;
 
int main() {
	int n; cin >> n;
	int x, y; cin >> x >> y;
	int A[100][100];
	int i = 1, j, k, p = n / 2;
	for (k = 1; k <= p; k++) {
		for (j = k - 1; j < n - k + 1; j++) A[k - 1][j] = i++;
		for (j = k; j < n - k + 1; j++) A[j][n - k] = i++; 
		for (j = n - k - 1; j >= k - 1; --j) A[n - k][j] = i++; 
		for (j = n - k - 1; j >= k; j--) A[j][k - 1] = i++;
	}
	if (n % 2 == 1) A[p][p] = n*n;
 
	cout << A[x - 1][y - 1];
 
}
