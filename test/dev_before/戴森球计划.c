#include <stdio.h>
#include <string.h>

int main() {
	char a[100];
	scanf("%s", &a);
	int len = strlen(a);
	int za[len], i, left[len - 1];
	for (i = 0; i < len; i++) {
		za[i] = a[i] - '0';
	}
	for (i = 0; i < len - 2; i++) {
		left[i] = (za[i] * 100 + za[i + 1] * 10 + za[i + 2]) / 32;
		za[i] -= left[i] * 3;
		za[i + 1] -= left[i] * 2;
	}
	for (i = 0; i < len - 1; i++) {
		left[i] *= 4;
	}
	left[len - 2] += za[len - 1];
	left[len - 3] += za[len - 2];
	for (i = 0; i < len - 1; i++) {
		printf("%d", left[i]);
	}


	return 0;
}