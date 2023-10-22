#include <stdio.h>

int main() {
	long long k;
	int n, i, j, cnt = 0;
	scanf("%d %lld", &n, &k);
	long long a[n];
	for (i = 0; i < n; i++) {
		scanf("%lld", &a[i]);
	}
	for (i = 0; i < n; i++) {
		for (j = i + 1; j < n; j++) {
			if (a[i] + a[j] == k) {
				cnt = 1;
				goto a;
			}

		}

	}
a:
	if (cnt == 1)
		printf("Yes");
	else
		printf("No");

	return 0;
}