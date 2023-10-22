#include <stdio.h>

int main() {
	int T, i;
	int sum1 = 0, sum2 = 0;

	scanf("%d", &T);
	int ar[1000] = {0};
	for (i = 0; i < T; i++) {
		scanf("%d", &ar[i]);
	}
	for (i = 0; i < T; i += 2) {
		sum1 += ar[i];
	}
	for (i = 1; i < T; i += 2) {
		sum2 += ar[i];
	}
	printf("%d\n%d\n", sum1, sum2);
	return 0;
}
