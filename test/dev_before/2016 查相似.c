#include <stdio.h>
#include <string.h>

int main() {
	char str[1001];
	int i, j, k, l, n = 0;
	gets(str);
	l = strlen(str);
	for (i = 0; i < l; i++) {
		for (k = 1, j = i + 1; j < l; j++) {
			if (str[j] == str[i])
				k++;
			else
				break;
		}
		printf("%c%d ", str[i], k);
		n++;
		i = j - 1;
	}
	printf("%d", n);
	return 0;
}