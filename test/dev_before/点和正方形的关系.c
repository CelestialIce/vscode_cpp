#include <stdio.h>

int main() {
	int i = 0, j = 0;
	scanf("%d %d", &i, &j);
	if (i <= 1 && i >= -1 && j <= 1 && j >= -1)

		printf("yes");
	else
		printf("no");
	return 0;
}