#include <iostream>
using namespace std;


int main () {
	int n, m;
	cin >> n >> m;

	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			if((i + j) % 2  == n % 2) {
				cout << "X";
			} else {
				cout << ".";
			}
		}
		cout << endl;
	}
	
	return 0;
}