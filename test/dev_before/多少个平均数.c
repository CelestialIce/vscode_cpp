#include <stdio.h>
#include <math.h>

int main() {
	long n;
	while (scanf("%ld", &n) != EOF) {
		int cnt = 0;
		for (int i = 1; i * i <= n; ++i) {
			if (i * i <= n)
				cnt++;
		}
		printf("%d\n", cnt);
	}

	return 0;
}