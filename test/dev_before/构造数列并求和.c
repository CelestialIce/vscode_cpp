#include <stdio.h>
#include <math.h>
double an(double n, int m);

int main() {//为了防止超时，就少算几次。
	float n, sum = 0, an;
	int m;
	while (scanf("%f %d", &n, &m)) {
		sum = n;
		for (int i = 0; i < m - 1; i++) {
			n = sqrt(n);
			an = n;
			if (an <= 1 + 1e-3) {
				sum += m - i - 1;//少加了1
				break;
			}//边界设置出错((
			sum += an;

		}
		printf("%.2lf", sum);
		sum = 0;
	}

	return 0;
}
