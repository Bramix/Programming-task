#include <iostream>
#include <algorithm>
using namespace std;

bool test(string, string);

int main() {
	string dictionary, buf;
	int n, res = 0;
	cin >> dictionary;
	sort(dictionary.begin(), dictionary.end());
	cin >> n;

	for(int i = 0; i < n; i++) {
		cin >> buf;
		if(test(dictionary, buf)) {
			res++;
		}
	}

	cout << res;

	return 0;
}

bool test(string dictionary, string str) {
	sort(str.begin(), str.end());
	int k = 0;
	bool buf = false;

	for(int i = 0; i < str.size(); i++) {
		buf = false;
		for(int j = k; j < dictionary.size(); j++) {
			if(str[i] == dictionary[j]) {
				k = j + 1;
				j = dictionary.size() + 1;
				buf = true;
			}
		}
		if(buf == false) {
			return false;
		}
	}
	return true;
}