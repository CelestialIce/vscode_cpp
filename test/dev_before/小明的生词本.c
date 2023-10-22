#include <stdio.h>
#include <string.h>

int main() {
	int n, cnt, i, j, sum = 0;
	scanf("%d", &n);
	char a[n][11];
	for (i = 0; i < n; ++i) {
		scanf("%s", a[i]);
		int cnt = 0;
		for (j = 0; j < i; ++j) {
			if (strcmp(a[i], a[j]) == 0) {
				cnt++;
			}
		}
		if (cnt == 0)
			sum++;
	}
	printf("%d", sum);
	return 0;
}