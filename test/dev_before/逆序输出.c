#include <stdio.h>

int main() {

	int n, i, cnt, t;
	while (scanf("%d", &n) != EOF) {
		int a[3] = {0};
		for (i = 0; n != 0; i++) {
			a[i] = n % 10;
			n /= 10;
		}
		t = 0;
		for (i = 0; i <= 2; i++) {
			cnt = 0;
			if (a[i] != 0) {
				cnt = 1;
			} else
				t++;
			if (cnt)
				printf("%d", a[i]);
		}
		if (t == 3)
			printf("0");
		printf("\n");
	}


	return 0;
}