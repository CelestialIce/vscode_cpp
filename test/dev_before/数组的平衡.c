#include <stdio.h>
#include <math.h>

int center(int a[], int n) {
	int cedip = 0, i = 0, sum = 0, fro = 0, cnt = 0, min = 1000;
	for (i = 1; i <= n; i++) {
		sum += a[i];
	}
	for (i = 1; i <= n; i++) {
		fro += a[i];
		sum -= a[i];
		if (abs(fro - sum) < min) {
			min = abs(fro - sum);
			cnt = i;
		}
	}

	return cnt;

}

int main() {
	int i, n, a[10001];
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		scanf("%d", &a[i]);
	}
	printf("%d", center(a, n));
	return 0;
}
