#include <stdio.h>

void inverse(int n) {
	int temp;
	if (n == 0)
		printf("0");
	if (n < 0) {
		printf("-");
		n = -n;
	}
	while (n > 0) {
		temp = n % 10;
		n /= 10;
		printf("%d", temp);
	}
	printf("\n");
}


int main() {
	int T, n;
	scanf("%d", &T);

	while (T--) {
		scanf("%d", &n);
		inverse(n);
	}
	return 0;
}





