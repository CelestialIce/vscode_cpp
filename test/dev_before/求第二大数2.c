#include <stdio.h>

int main() {
	int n, i;
	while (scanf("%d", &n) != EOF) {
		int a[n];
		for (i = 0; i < n; i++) {
			scanf("%d", &a[i]);
		}
		int max1 = -1, max2 = -1, flat = 0;
		for (i = 0; i < n; i++) {
			if (a[i] > max1) {
				max1 = a[i];
				flat = 1;
			}
		}
		for (i = 0; i < n; i++) {
			if (a[i] > max2 && a[i] != max1) {

				max2 = a[i];
			}
		}
		printf("%d\n", max2);
	}

	return 0;
}