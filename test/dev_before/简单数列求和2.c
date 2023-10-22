#include <stdio.h>

int main() {
	int n;
	double an = 0;
	double n_ = 0;
	double Sn = 0;

	scanf("%d", &n);
	for (int t = 1; t <= n; t++) {
		an = 0;
		for (int i = 1; i <= t; i++) {
			n_ = (double)(i) / (t + 1);
			an += n_;
		}
		Sn += an	;
	}
	printf("%.4lf", Sn);
	return 0;
}