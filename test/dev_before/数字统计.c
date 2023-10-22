#include <stdio.h>]

int num2(int n) {
	int x = 0, t = 0;
	while (n) {
		t = n % 10;
		n /= 10;
		if (t == 2)
			x++;
	}
	return x;
}

int main() {
	int i = 0, j = 0, n = 0, t = 0;
	scanf("%d %d", &i, &j);
	if (i >= 0) {
		for (; i <= j; i++) {
			t = num2(i);
			n += t;
		}
		printf("%d", n);
	}

	return 0;
}