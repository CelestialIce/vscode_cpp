#include <stdio.h>

int main() {
	int a[1000000] = {0};
	int n = 0, b = 0;
	while (scanf("%d", &b) != EOF) {
		a[b]++;
		n++;
	}
	for (int i = 0; i <= n; i++) {
		if (a[i] > n / 2)
			printf("%d", i);
		break;
	}

	return 0;
}