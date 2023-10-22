#include <stdio.h>

int main() {
	double a;
	scanf("%lf", &a);
	a = a + 0.005;
	a = a * 100;
	a = (int)(a);            //强制数据类型转换需要两个括号
	a = a / 100;
	printf("%f", a);
	return 0;
}
