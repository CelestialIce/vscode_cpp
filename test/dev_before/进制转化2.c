#include <stdio.h>
#include <math.h>

int main() {
	int T, i, j, sum = 0;
	long long n;
	char num[31] = {0};
	scanf("%d", &T);
	for (i = 31; i < T; i++) {
		gets(num);

		for (j = 0; j < 31; j++) {
			if (num[j] != 0)
				sum += pow(2, j);
		}
		printf("%d\n", sum);
		sum = 0;
	}

	return 0;
}
int c;
