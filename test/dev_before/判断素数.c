#include <stdio.h>
#include <math.h>

int primes(int a[], int n) {
	int cnt = 0, sum = 0;
	for (int i = 0; i < n; i++) {
		cnt = 0;
		if (a[i] == 1)
			continue;
		for (int j = 2; j * j <= a[i]; j++) {
			if (a[i] % j == 0) {
				cnt++;
			}
		}
		if (cnt == 0) {
			sum++;
		}
	}
	return sum;
}

int main() {
	int i, n;
	int a[10000];
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	printf("%d", primes(a, n));
	return 0;
}

