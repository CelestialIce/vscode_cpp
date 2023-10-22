#include <stdio.h>

int main() {
	int T, i, a, b, c;
	double n;
	while (scanf("%d", &T) != EOF && T != 0) {
		for (i = 0, a = 0, b = 0, c = 0; i < T; i++) {
			scanf("%lf", &n);
			if (n > 0)
				a++;
			else if (n == 0)
				b++;
			else if (n < 0)
				c++;
		}
		printf("%d %d %d\n", c, b, a);
	}
	return 0;
}