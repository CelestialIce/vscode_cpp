#include <stdio.h>

int main() {
	long long n;
	int cnt = 0;
	scanf("%lld", &n);
	while (n != 1) {
		cnt++;
		if (n % 2 != 0)
			n = 3 * n + 1;
		else
			n = n / 2;
	}
	printf("%d", cnt);
	return 0;
}