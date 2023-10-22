#include <stdio.h>

int main() {
	int n, i;
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		for (int t = 1; t <= i; t++) {//上一个变量可以用到下一层循环，每次只变自己
			printf("%d*%d=%d ", t, i, i * t);
		}
		printf("\n");
	}



	return 0;
}