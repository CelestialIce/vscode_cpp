#include <stdio.h>

int main() {
	int T, i, j, t, k;
	scanf("%d", &T);
	int g[T];
	scanf("%d", &k);
	for (i = 0; i < T; i++) {
		scanf("%d", &g[i]);
	}
	for (i = 0; i < T; i++) {
		for (j = 0; j < T - i - 1; j++) {
			if (g[j] < g[j + 1]) {
				t = g[j];
				g[j] = g[j + 1];
				g[j + 1] = t;
			}
		}

	}
	printf("%d ", g[k - 1]);


	return 0;
}