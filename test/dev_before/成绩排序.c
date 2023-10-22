#include <stdio.h>

int main() {
	int T, i, j, t;
	scanf("%d", &T);
	int g[T];
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
	for (i = 0; i < T; i++) {
		printf("%d ", g[i]);
	}

	return 0;
}