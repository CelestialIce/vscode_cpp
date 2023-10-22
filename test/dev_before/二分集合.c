#include <stdio.h>
#include <string.h>

int main() {
	int T = 0, n = 0, a[5] = {0}, i = 0;
	scanf("%d", &T);
	while (T--) {
		memset(a, 0, sizeof(a));
		scanf("%d", &n);
		for (i = 0; i < n; i++)
			scanf("%d", &a[i]);
		if (n == 1) {
			puts("NO");
			continue;
		}
		if (n == 2) {
			puts(a[0] == a[1] ? "YES" : "NO");
		}

	}

	return 0;
}