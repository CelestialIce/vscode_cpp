#include <stdio.h>
#include <math.h>

long long int f(int n) {
	long long int y;
	if (n > 0)
		y = n * f(n - 1);
	else
		y = 1;
	return y;
}

int main() {
	int x, sum = 0;
	long long y;
	long double n;
	long long m;
	int z;

	while (scanf("%d", &x) != EOF) {

		if (x <= 20) {
			y = f(x);
			for (int i = 0; i < 6; i++) {
				z = y % 10;
				sum += z * pow(10, i);
				y = y / 10;
			}
			printf("%06d\n", sum);
			sum = 0;
		} else if (x == 21)
			printf("440000\n");
		else if (x == 22)
			printf("680000\n");
		else if (x == 23)
			printf("640000\n");
		else if (x == 24)
			printf("360000\n");
		else
			printf("000000\n");
	}
	return 0;
}