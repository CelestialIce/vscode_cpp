#include <stdio.h>

long long jc(int a);

int main() {
	int n;
	long long y;

	while ((scanf("%d", &n) != EOF)) {
		if (n > 24)
			printf("000000\n");
		else if (n == 21)
			printf("440000\n");
		else if (n == 22)
			printf("680000\n");
		else if (n == 23)
			printf("360000\n");
		else {
			y = jc(n);
			y %= 1000000;
			printf("%06lld", y);
		}
		y = 0;

	}
	return 0;
}

long long jc(int a) {
	long long y = 1;
	for (int t = 1; t <= a; t++) {
		y *= t;
	}
	return y;
}