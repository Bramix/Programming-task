#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n; cin >> n;
	int buf, i, j, k = 0;
	vector<int> mas;
	for(i = 0; i < n; i++) {
		cin >> buf;
		mas.push_back(buf);
	}
	for(i = 0; i < n; i++) {
		k = 0;
		for(j = 0; j < n; j++) {
			if(mas[i] % mas[j] == 0) k++;
		}
		if(k == 1) cout << mas[i] << " ";
	}
	return 0;
}
