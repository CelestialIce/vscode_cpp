#include <stdio.h>

int main() {
	long long a, n, i, sum = 0;
	scanf("%d", & a);//ȡֵ����
	while (scanf("%lld", &n) != EOF) {
		if (n <= 0)
			continue;
		break;
	}

	for (i = a; i < a + n; i++) {//����������
		sum += i;
	}
	printf("%lld", sum);
	return 0;
}