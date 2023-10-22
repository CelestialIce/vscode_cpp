#include <stdio.h>

int main() {
	int ar[3] = {0};
	int c, t, i = 0;

	scanf("%d", &c);
	do {
		t = c % 10;
		c /= 10;
		ar[i] = t;
		i++;
	} while (i < 3);
	for (i = 0, t = 0; i < 3; i++) {
		if (ar[i] != 0 || t != 0) {
			printf("%d", ar[i]);
			t++;
		}

	}

	return 0;
}