#include <stdio.h>
#include <string.h>
int max(int a, int b);

int main() {
	char ca[101] = {0}, cb[101] = {0};
	int i = 0;
	while (scanf("%s %s", &ca, &cb) != EOF) {
		int len1 = strlen(ca);
		int len2 = strlen(cb);
		int a[len1], b[len2], c[max(len1, len2) + 1] ;
		memset(a, 0, sizeof(a));
		memset(b, 0, sizeof(b));
		memset(c, 0, sizeof(c));
		int len = len1 + len2;
		for (i = 0; i < len1; i++) {
			a[len1 - i - 1] = ca[i] - '0';
		}
		for (i = 0; i < len2; i++) {
			b[len2 - i - 1] = cb[i] - '0';
		}
		for (i = 0; i < len1; i++) {
			c[i] += a[i];
		}
		for (i = 0; i < len2; i++) {
			c[i] += b[i];
		}
		for (i = 0; i < max(len1, len2) + 1; i++) {
			int n = 0;
			n = c[i] / 10;
			c[i] %= 10;
			c[i + 1] += n;
		}
		int flat = 0, cnt = 0;
		for (i = max(len1, len2); i >= 0; i--) {

			if (c[i] == 0 && flat == 0) {
				continue;
			}
			if (c[i] != 0)
				flat = 1;

			printf("%d", c[i]);
			cnt++;
		}
		if (cnt == 0)
			printf("0");
		printf("\n");
		char ca[101] = {0}, cb[101] = {0};
		int i = 0;
		flat = 0;
	}

	return 0;
}

int max(int a, int b) {
	int c = a > b ? a : b;
	return c;
}