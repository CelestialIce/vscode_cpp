#include <stdio.h>

int main() {
	int i;
	double d1, d2;
	char c;

	scanf("%lf %d %c %lf", &d1, &i, &c, &d2);
	printf("%c %d %.2f %.2f", c, i, d1, d2);

	return 0;
}