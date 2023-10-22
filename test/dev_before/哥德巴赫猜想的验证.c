#include <stdio.h>
#include <math.h>

int prime(int n) {
	if (n == 1 && n == 0)
		return 0;
	else {
		for (int i = 2; i * i <= n; i++)
			if (n % i == 0)
				return 0;
		return 1;
	}
}


void OddDiv(int n) {
	for (int i = 2; i < n; i++) {
		for (int j = i; j < n; j++) {
			if (prime(i) && prime(j) && prime(n - i - j) && n - i - j != 0) {
				printf("%d=%d+%d+%d", n, i, j, n - i - j);
				goto out;
			}
		}
	}
out:
	;
}

void EvenDiv(int n) {
	for (int i = 2; i < n; i++) {
		if (prime(i) && prime(n - i)) {
			printf("%d=%d+%d", n, i, n - i);
			break;
		}
	}
}


int main() {
	int n;
	scanf("%d", &n);
	(n % 2 == 0) ? EvenDiv(n) : OddDiv(n);
	return 0;
}