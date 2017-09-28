#include <iostream>
using namespace std;

int max(int, int);
 
int main() {
    int a, b, res;
    cin >> a >> b;
    res = max(a, b); 
    cout << res << endl;
    return 0;
}

int max(int a, int b) {
    int res;
    res = (a / b) * a + (b / a) * b;
    res /= (b / a + a / b);
    return res;
}