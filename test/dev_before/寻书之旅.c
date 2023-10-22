#include <stdio.h>

int main() {
	int T, t, i, e = 0;
	scanf("%d", &T);
	int n[T];
	scanf("%d", &t);
	for (i = 0; i < T; i++) {
		scanf("%d", &n[i]);
		if (n[i] == t) {
			printf("%d", i + 1);
			e++;
		}
	}
	if (e == 0)
		printf("Error!");

	return 0;
}