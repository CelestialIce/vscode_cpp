#include <stdio.h>
int f(int n);

int main() {
	int a = 3;
	printf("%d", f(a));
	return 0;
}

int f(int n) {
	return ((n > 0) ? 2 * f(n - 1) + f(n - 2) : -1);
}

