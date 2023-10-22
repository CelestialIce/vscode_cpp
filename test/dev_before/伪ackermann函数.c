#include <stdio.h>
void arckermann(int m, int n, int sum);

int main() {
	int t = 0, i = 0, m = 0, n = 0;
	scanf("%d", &t);
	for (i = 0; i < t; i++) {
		scanf("%d %d", &m, &n);
		arckermann(m, n, 0);
	}

	return 0;
}

void arckermann(int m, int n, int sum) {
	if (m == 0 && n > 0) {
		printf("%d\n", n + 1 + sum);
	} else if (m > 0 && n == 0) {
		arckermann(m - 1, 1, sum);
	} else if (m > 0, n > 0) {
		arckermann(m - 1, n - 1, sum + n);
	} else if (m == 0 && n == 0) {
		printf("%d\n", sum);
	}

}