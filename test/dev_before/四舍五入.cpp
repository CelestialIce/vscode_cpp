#include <stdio.h>

int main() {
	double a;
	scanf("%lf", &a);
	a = a + 0.005;
	a = a * 100;
	a = (int)(a);            //ǿ����������ת����Ҫ��������
	a = a / 100;
	printf("%f", a);
	return 0;
}
