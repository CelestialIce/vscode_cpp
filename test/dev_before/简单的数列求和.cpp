#include <stdio.h>


int main() {
	int n;
	double an;
	Sn;

	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		an = i / (n + 1);
		Sn += an;
	}
	printf("%.4lf", Sn);
	return 0;
}