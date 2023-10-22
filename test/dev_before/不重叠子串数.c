#include <stdio.h>
#include <string.h>

int main() {
	int n, i, cnt;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		cnt = 0;
		char a[200000] = {'0'};
		char b[200000] = {'0'};
		scanf("%s", &a);
		scanf("%s", &b);
		int j = strlen(a);
		int k = strlen(b);
		for (int l = 0; l <= j - k;) {
			char ki[200000] = {'0'};
			strncpy(ki, a + l, k);
			if (strcmp(ki, b) == 0) {
				cnt++;
				l += k;
			} else
				l++;
		}


		printf("%d\n", cnt);

	}

	return 0;
}