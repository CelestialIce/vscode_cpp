#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
	int n = 0, flat = 0, max = 0, cnt = 0;
	scanf("%d", &n);
	for (int i = 0; i < pow(2, n); i++) {
		int a[n], t = i;
		memset(a, 0, sizeof(a));
		for (int j = n - 1; j >= 0; j--) {
			a[j] = t % 2;
			t /= 2;
		}
		flat = max = 0;
		for (int j = 0; j < n; j++) {
			if (a[j] == 1)
				flat++;
			if (a[j] == 0)
				flat = 0;
			if (flat > max)
				max = flat;
		}
		if (max <= 1) {
			for (int j = 0; j < n; j++) {
				printf("%d", a[j]);
			}
			printf("\n");
			cnt++;
		}
	}
	printf("%d", cnt);

	return 0;
}