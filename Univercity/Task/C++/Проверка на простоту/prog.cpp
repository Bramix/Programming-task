#include <iostream>
#include <cmath>
using namespace std;

bool easy(int);
void print_str(string);


int main () {
	int n;
	cin >> n;
	if(easy(n)) {
		print_str("prime");
	} else {
		print_str("composite");
	}
	
	return 0;
}

bool easy(int n) {
	if(n == 1) {
        return false;
	} else {
		for(int i = 2; i <= sqrt(n); i++){
			if(n % i == 0) {
            	return false;
        	}
		}    
	}
    return true;
}

void print_str(string str) {
	cout << str;
}