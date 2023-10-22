#include <stdio.h>

int main() {
	int x, cnt = 0;
	while (scanf("%d", &x) != EOF) {
		int i = 0;
		cnt = 0;
		for (i = 0; i * i <= x; i++) {
			if (i * i == x) {
				cnt++;
				break;
			}
		}
		if (cnt)
			printf("y\n");
		else
			printf("n\n");

	}
	return 0;
}