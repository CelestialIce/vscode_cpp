#include <stdio.h>
#include <math.h>

int main() {
	int a, b;


	while (scanf("%d %d", &a, &b) != EOF) {

		int arr[200] = {0};
		int cnt = 0, n = 0;
		int i, t;
		int sum = 0;

		for (t = a, i = 0; t <= b; t++, i++) {
			arr[i] = t;
			sum += t;
			n++;
		}
		for (i = 0; i < n; i++) {
			printf("%5d", arr[i]);
			cnt++;
			if (cnt % 5 == 0 )
				putchar( '\n');
		}
		if (cnt % 5 == 0)
			printf("Sum = %d", sum);
		else
			printf("\nSum = %d", sum);

	}

	return 0;
}