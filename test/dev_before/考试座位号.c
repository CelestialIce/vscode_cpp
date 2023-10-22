#include <stdio.h>

int main() {
	int n = 0, m = 0, i = 0;
	int a[1000][17] = {0};
	int b[1000][2] = {0};
	int c[1000] = {0};
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%s %d %d", &a[i], &b[i][0], &b[i][1]);
	scanf("%d", &m);
	for (i = 0; i < n; i++) {
		scanf("%d", &c[i]);
		for (int j = 0; j < n; j++)
			if (c[i] == b[j][0])
				printf("%s %d\n", a[j], b[j][1]);
	}

	return 0;
}