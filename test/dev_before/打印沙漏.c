#include <stdio.h>

int main() {
	char mark;
	int n, layer = 0, cnt, left;
	scanf("%d %c", &n, &mark);
	n++;
	while (n > 0) {
		left = n;
		n -= 2 + layer * 4;
		if (n >= 0)
			layer++;
	}
	int layer2 = layer, i, j;

	for (i = layer; i > 0; i--) {
		for (j = 0; j < layer - i; j++) {
			printf(" ");
		}
		for (j = 2 * i - 1; j > 0; j--) {
			printf("%c", mark);
		}
		printf("\n");
	}
	for (i = 1; i < layer; i++) {
		for (j = 0; j < layer - i - 1; j++) {
			printf(" ");
		}
		for (j = 0; j < 2 * (i + 1) - 1; j++) {
			printf("%c", mark);
		}
		printf("\n");
	}
	if (n == 0)
		printf("0");
	else {
		printf("%d", left);
	}

	return 0;
}