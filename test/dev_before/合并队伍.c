#include <stdio.h>

int main() {
	int m, n, i, j, k = 0;
	int b[10005] = {0};
	int c[10005] = {0};
	scanf("%d %d", &m, &n);
	int a[20005] = {0};
	for (i = 0; i < m; i++) {
		scanf("%d", &b[i]);
	}
	for ( j = 0; j < n; j++) {
		scanf("%d", &c[j]);
	}

	for ( i = 0, j = 0, k = 0; i < m && j < n; ) {
		if (b[i] >= c[j]) {
			a[k] = b[i];
			i++;
			k++;
		} else {
			a[k] = c[j];
			j++;
			k++;
		}
	}
	for (; i < m; i++, k++)
		a[k] = b[i];
	for (; j < n; j++, k++)
		a[k] = c[j];



	for (int i = 0; i < k; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");

	return 0;
}