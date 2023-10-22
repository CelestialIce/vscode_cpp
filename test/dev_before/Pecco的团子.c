#include <stdio.h>

int a[1000000] = {0};
int main() {
	int i = 0, t = 0, j = 0;
	int n = 0, m = 0, k = 0, cnt = 0;

	scanf("%d", &t);
	for (i = 0; i < t; i++) {
		cnt = 0;

		scanf("%d %d %d", &n, &m, &k);
		for (j = 0; j < k; j++) {
			scanf("%d", &a[j]);
		}
		for (j = 0; j < k; j++) {
			n += m;
			if (n >= a[j]) {
				cnt = j + 1;
				break;
			}

		}
		if (cnt != 0)
			printf("%d\n", cnt);
		else
			printf("Find Index to boost!\n");
	}

	return 0;
}