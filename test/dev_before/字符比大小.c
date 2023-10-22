#include <stdio.h>

int main() {
	int n = 0, i = 0;
	char a = 0, b = 0, c = 0, t = 0;
	scanf("%d", &n);
	getchar();
	for (i = 0; i < n; i++) {
		scanf("%c%c%c", &a, &b, &c);
		getchar();
		if (a > b) {
			t = a;
			a = b;
			b = t;
		}
		if (b > c) {
			t = b;
			b = c;
			c = t;
		}
		if (a > b) {
			t = a;
			a = b;
			b = t;
		}

		printf("%c %c %c\n", a, b, c);
	}
	return 0;
}