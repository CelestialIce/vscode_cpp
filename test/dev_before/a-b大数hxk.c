#include <stdio.h>
#include <string.h>

int x[1000] = {0}, y[1000] = {0}, z[1000] = {0};
char N[1000], M[1000];

int jian(int x[], int y[], int len) {
	int i, j;
	for (i = 0; i < len; i++) {
		if (x[i] >= y[i])
			z[i] = x[i] - y[i];
		else {
			z[i] = 10 + x[i] - y[i];
			x[i + 1] = x[i + 1] - 1;
		}
	}
	for (i = len - 1; i > 0; i--) {
		if (z[i] == 0)
			len--;
		else
			break;
	}
	for (i = len - 1; i >= 0; i--)
		printf("%d", z[i]);
	printf("\n");
}

int main() {
	while (scanf("%s %s", &N, &M) != EOF) {

		int i, j = 0, k = 0;
		int n = strlen(N);
		int m = strlen(M);
		for (i = n - 1, j = 0; i >= 0; i--)
			x[j++] = N[i] - '0';
		for (i = m - 1, k = 0; i >= 0; i--)
			y[k++] = M[i] - '0';
		if (strcmp(M, N) == 0) {
			printf("0\n");
			goto remake;
		}
		if (n > m)
			jian(x, y, n);
		else if (n < m) {
			printf("-");
			jian(y, x, m);
		} else if (m == n) {
			for (i = n - 1; i >= 0; i--) {
				if (x[i] == y[i])
					continue;
				if (x[i] > y[i]) {
					jian(x, y, n);
					break;
				}
				if (x[i] < y[i]) {
					printf("-");
					jian(y, x, n);
					break;
				}

			}

		}
remake :
		continue;

	}

	return 0;
}