#include <stdio.h>

int main() {
	int a[100], n, k, i, j, flag = 1;
	long num, sum = 0;

	scanf("%d %d", &n, &k);
	for (i = 0; i < n; i++)
		scanf("%1d", &a[i]);

	for (i = n - 1; i >= 0; i -= k) {
		num = 0;
		if (flag < 0) {
			for (j = 0; j < k && i - j >= 0; j++)
				num = num * 10 + a[i - j];
		} else {
			j = i - k + 1;
			if (j < 0)
				j = 0;
			for (; j <= i; j++)
				num = num * 10 + a[j];
		}
		flag *= -1;
		sum += num;
	}

	for (num = 1, i = 0; i < k; i++)
		num *= 10;
	printf("%d\n", sum % num);

	return 0;
}