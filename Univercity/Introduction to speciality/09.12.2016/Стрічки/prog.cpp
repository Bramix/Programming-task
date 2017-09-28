#include <iostream>
using namespace std;
 
int main() {
	int a, b, c; cin >> a >> b >> c;
	int res = c / (int)(b / a);
	if(c % ((int)(b / a)) != 0) res++; 
	cout << res;
	return 0;
}