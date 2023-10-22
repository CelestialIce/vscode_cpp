#include <stdio.h>

int main() {
	int cir[1000] = {0};
	int n, m, con = 0;
	scanf("%d %d", &n, &m);
	int cnt = n;
	for (int i = 1; i <= n; i++)
		cir[i] = 1;
	for (int i = 1; cnt != 0; i++) {
		if (i > n)
			i = 1;
		if (cir[i] == 1) {
			con++;
			if (con % m == 0) {
				cir[i] = 0;
				cnt--;
				printf("%d ", i);
			}
		}

	}

	return 0;
}