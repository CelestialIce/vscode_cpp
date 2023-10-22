#include <stdio.h>
#define Pi 3.14159

void GetInfo(double r, double result[]) {
	result[0] = 2 * Pi * r;
	result[1] = Pi * r * r;
	result[2] = 4 * Pi * r * r;
	result[3] = 4.0 / 3 * Pi * r * r * r;
}

int main() {
	double r, result[4];
	scanf("%lf", &r);
	GetInfo(r, result);
	printf("%.2f\n%.2f\n%.2f\n%.2f", result[0], result[1], result[2], result[3]);
	return 0;
}
