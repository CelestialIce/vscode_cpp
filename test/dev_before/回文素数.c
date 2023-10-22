#include <stdio.h>
#include <math.h>//找素数从2开始
int prime(int n);

int main() {
	int i, j, num, n;
	int cnt = 0;
	for (i = 1; i <= 9; i++) {
		for (j = 0; j <= 9; j++) {
			num = 101 * i + 10 * j;
			int c = 1;
			for (int n = 2; n <= sqrt(num); n++) {
				if (num % n  == 0)
					c = 0;
			}
			if (c) {
				printf("%d ", num);
				cnt++;
				if (cnt % 4 == 0 && cnt != 0)
					putchar('\n');
			}

		}
	}
	printf("\ncount=%d", cnt);
	return 0;
}



