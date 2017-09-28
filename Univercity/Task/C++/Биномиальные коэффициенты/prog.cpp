#include <iostream>
using namespace std;

long result(int n, int k) {
       if(k == 0 || n == k) return 1;
       return result(n - 1, k) + result(n - 1, k - 1);
}

int main() {
       int n, k;
       long res;
       cin >> n >> k;
       res = result(n, k);
       cout << res;
       return 0;
}
