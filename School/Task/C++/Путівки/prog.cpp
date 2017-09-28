#include <iostream>
using namespace std;
 
int maxx=0,n;
int d[15],c[15];
 
void recurs(int k, int s)
{
    int i,f,q;
    f = 0;
    for(i = 0; i < n; i++){
        if(d[i] > k){

            q = (d[i] - k) * c[i];
            f = d[i];

            d[i] = 0;

            recurs(k + 1, s + q);
            d[i] = f;
            f = 1;
        }
    }

    if (f == 0 && maxx < s)maxx = s;
}
 
int main()
{
    cin >> n;
    for(int i = 0; i < n; i++)cin >> d[i] >> c[i];
    recurs(0,0);
    cout << maxx;
    return 0;
}
