#include <stdio.h>

int main() {
	long long a, b;
	scanf("%lld", &a);
	b = a / 8;
	a = a % 32 + b;
	printf("%lld", a);

	return 0;
}