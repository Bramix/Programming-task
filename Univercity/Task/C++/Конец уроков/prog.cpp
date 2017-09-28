#include <iostream>
using namespace std;
 
int main() {
    int n, res = 0, h, m;
    cin >> n;
    res += n * 45;
    res += (n / 2) * 5;
    res += (n / 2) * 15;
    if (n % 2 == 0) res -= 15;
    h = res / 60;
    m = res - (h * 60);
    h += 9;
    cout << h << " " << m << endl;
   
    return 0;
}