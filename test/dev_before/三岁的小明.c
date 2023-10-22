#include <stdio.h>

int main() {
	int t, a, b;
	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		scanf("%d %d", &a, &b);
		a = a + b;
		a %= 100;
		printf("%d\n", a);
	}

	return 0;
}