#include <stdio.h>
 
int main() {
	int n, m; scanf("%d%d", &n, &m);
	int res1 = 0, res2 = 0, res3 = 0, t = 0;
	int buf;

	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			scanf("%d", &buf);
			if(buf > res1) {
				res1 = buf;
				res2 = i;
				res3 = j;
			}
		}
	}
	printf("%d\n%d\n%d", res1, res2, res3);
	return 0;
}