#include <stdio.h>

int main() {
	long long a, n, i, sum = 0;
	scanf("%d", & a);//取值符号
	while (scanf("%lld", &n) != EOF) {
		if (n <= 0)
			continue;
		break;
	}

	for (i = a; i < a + n; i++) {//个数数错了
		sum += i;
	}
	printf("%lld", sum);
	return 0;
}