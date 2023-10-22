#include <stdio.h>
#include <math.h>

int main() {
	int T, i;
	scanf("%d", &T);
	for (i = 0; i < T; i++) {
		long double geol = 0, geor = 0;
		int n = 0;
		double num = 0;//又是你，double 以后直接用double了不想.
		scanf("%lf", &num);
		geol = 1.0 / (1 - num);
		while (1) {//直接锁定循环，除了for，就是这个。
			geor += pow(num, n);//直接用表达式，精度高
			if (fabs(geol - geor) <= 1e-6)
				break;
			n++;
		}
		printf("%d\n", n);
	}


	return 0;
}