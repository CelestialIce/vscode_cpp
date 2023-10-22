#include <stdio.h>

int main() {
	int i, j, sum;
	while (scanf("%d", &i) != EOF) {

		sum = 1;
		for (j = 2; j < i; ++j) {
			if (i % j == 0)
				sum += j;
		}
		if (sum == i) {
			printf("%d, its factors are", i);
			for (j = 1; j < i; ++j) {
				if (i % j == 0)
					printf(" %d", j);
			}

		} else {
			printf("No");
		}
		printf("\n");
	}

	return 0;
}