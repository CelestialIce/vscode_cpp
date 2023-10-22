#include <stdio.h>
#include <string.h>

int main() {
	char a[1500] = {0};
	char b[1500] = {0};
	int i, j;

	scanf("%s%s", &a, &b);
	int k = strlen(a);
	int l = strlen(b);
	int e[k] ;
	int f[l] ;
	int c[k + l] ;
	memset(e, 0, sizeof(e));
	memset(f, 0, sizeof(f));
	memset(c, 0, sizeof(c));
	for (i = 0; i < k; i++) {
		e[k - i - 1] = a[i] - '0';
	}
	for (i = 0; i < l; i++) {
		f[l - i - 1] = b[i] - '0';
	}
	for (i = 0; i < l; i++) {
		for (j = 0; j < k; j++) {
			c[i + j] += e[j] * f[i];
			c[i + j + 1] += c[i + j] / 10;
			c[i + j] %= 10;
		}
	}

	int len = k + l - 1;//这里出错，还是要调试一下
	while (c[len] == 0) {
		len--;
	}

	for (i = len; i >= 0; i--) {
		printf("%d", c[i]);
	}
	if (len < 0)
		printf("0");
	return 0;
}