#include <stdio.h>

int time_min(int t);
int min_time(int t);

int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	a = time_min(a);
	a = a + b;
	a = min_time(a);
	printf("%d", a);

	return 0;
}

int time_min(int t) {
	int h, m;
	int sum;

	h = t / 100;
	m = t % 100;
	sum = h * 60 + m;
	return sum;
}

int min_time(int t) {
	int h, m;
	int sum;

	h = t / 60;
	m = t % 60;
	sum = h * 100 + m;
	return sum;
}