#include <stdio.h>
#include <string.h>

int x[10000] = {0}, y[10000] = {0}, z[10000] = {0};

int main() {
	char a[10000], b[10000];
	int len, len1, len2;
	while (scanf("%s %s", a, b) != EOF) {
		len1 = strlen(a);
		len2 = strlen(b);
		int j = 0, k = 0, i;
		for (i = len1 - 1; i >= 0; i--) {
			x[j] = a[i] - '0';
			j++;
		}
		for (i = len2 - 1; i >= 0; i--) {
			y[k] = b[i] - '0';
			k++;
		}
		if (len > len2)
			len = len1;
		else
			len = len2;
		i = 0;
		int m = 0;
		for (i = 0; i < len; i++) {
			z[i] = (x[i] - y[i] + m) % 10;
			if ((x[i] - y[i] + m) < 0)
				m = -1;
			else
				m = 0;
		}
		if (x[i - 1] + y[i - 1] + m < 0)
			i = i - 2;
		else
			i = i - 1;
		for (; i >= 0; i--)
			printf("%d", z[i]);
		printf("\n");
	}
	return 0;
}