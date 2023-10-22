#include <stdio.h>
#include <string.h>

void sub(int a[], int b[], int len) {
	int i, j;
	int c[1000];
	for (i = 0; i < len; i++) {
		if (a[i] >= b[i])
			c[i] = a[i] - b[i];
		else {
			c[i] = a[i] + 10 - b[i];
			a[i + 1] = a[i + 1] - 1;
		}
	}
	for (i = len - 1; i > 0; i--) {
		if (c[i] == 0)
			len--;
		else
			break;
	}
	for (i = len - 1; i >= 0; i--)
		printf("%d", c[i]);
	printf("\n");
}

int main() {
	char ca[1000], cb[1000];
	int len1, len2;
	while (scanf("%s %s", ca, cb) != EOF) {//
		int i, j = 0, k = 0;
		len1 = strlen(ca);
		len2 = strlen(cb);
		int a[1000], b[1000];//
		memset(a, 0, sizeof(a));
		memset(b, 0, sizeof(b));
		for (i = 0; i < len1; i++) {
			a[len1 - i - 1] = ca[i] - '0';
		}
		for (i = 0; i < len2; i++) {
			b[len2 - i - 1] = cb[i] - '0';
		}
		if (len1 > len2)
			sub(a, b, len1);
		else if (len1 < len2) {
			printf("-");
			sub(b, a, len2);
		} else {
			int cnt = 0;
			for (i = len1 - 1; i >= 0; i--) {
				if (a[i] == b[i]) {
					cnt++;
					continue;
				}

				if (a[i] > b[i]) {
					sub(a, b, len1);
					break;
				}
				if (a[i] < b[i]) {
					printf("-");
					sub(b, a, len1);
					break;
				}
			}
			if (cnt == len1)
				printf("0\n");//
		}
	}
	return 0;
}