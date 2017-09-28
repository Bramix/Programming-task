/*

Побудувати ялинку із зірок
Ввід
4
Вивід
   *
  ***
 *****
*******

*/
#include <iostream>
using namespace std;
 
int main() {
	int n; cin >> n;
	int j, k = 1;
	for(int i = 1; i <= n; i++) {
		for(j = 0; j < n - i; j++) cout << " ";
		for(j = 0; j < k; j++) cout << "*";
		k += 2;
		cout << endl;
	}

	return 0;
}