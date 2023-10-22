#include <stdio.h>
int leap_year(int y);

int main() {
	int m, n;
	int cnt = 0;
	scanf("%d %d", &m, &n);
	for (int i = m + 1; i <= n; i++) {

		if (leap_year(i)) {
			printf("%d ", i);
			cnt++;
			if (cnt % 5 == 0)
				printf("\n");
		}
	}

	return 0;
}

int leap_year(int y) {
	int c = 0;
	if (y % 400 == 0 || y % 4 == 0 && y % 100 != 0)
		c = 1;

	return c;
}