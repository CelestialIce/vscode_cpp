#include <stdio.h>

int main() {
	int t, T;
	scanf("%d", &T);
	for (t = 0; t < T; t++) {
		int a, A;
		scanf("%d", &A);
		int ar[A];
		for (a = 0; a < A; a++) {
			scanf("%d", &ar[a]);
		}
		int max = ar[0], min = ar[0];
		for (a = 0; a < A; a++) {
			if (ar[a] > max)
				max = ar[a];
			if (ar[a] < min)
				min = ar[a];
		}
		double sum = 0;//ÒªÊäÈëdouble
		for (a = 0; a < A; a++) {
			sum += ar[a];

		}
		sum = sum - max - min;
		sum = sum / (A - 2);
		printf("%.2f\n", sum);
	}

	return 0;
}