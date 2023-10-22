#include <stdio.h>

int main() {
	int t;
	int s, g;

	scanf("%d", &t);
	s = t / 16;
	t %= 16;
	g = 10 * s + t;
	printf("%d", g);

	return 0;
}