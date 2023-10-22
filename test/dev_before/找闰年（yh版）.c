#include <stdio.h>

int main() {
	int m, n, count = 0;
	scanf("%d%d", &m, &n);
	for (int i = m; i < n + 1; i++) {
		if (i % 400 == 0 || i % 4 == 0 && i % 100 != 0) {
			printf("%d", i);
			printf(" ");
			count++;
			if (count % 5 == 0 && count != 0)
				printf("\n");
		}



	}
	return 0;
}