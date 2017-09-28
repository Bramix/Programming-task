#include<iostream>
#include<cmath>
using namespace std;

int main(){
	double x1, y1, r1, x2, y2, r2, res = 2, d;
	cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;

	d = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));

	if(x1 == x2 && y1 == y2 && r1 == r2){
        res=-1;
	}

	else if(r1 + r2 < d || (d < r1 - r2 && r1 > r2) || (d < r2 - r1 && r2 > r1)){
		res=0;
	}

	else if(r1 + r2 == d || (d == r1 - r2 && r1 > r2) || (d == r2 - r1 && r2 > r1)){
		res = 1;
	}

	cout << res;

	return 0;
}
