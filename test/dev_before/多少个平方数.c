#include <stdio.h>


int main() {
	int cnt = 0;
	long long n;
	while (scanf("%llf", &n)!=EOF) {//又少打了EOF
		for (long long i = 1; i * i <= n; i++ ) {
			cnt++;
		}
		printf("%d\n", cnt);
		cnt = 0;
	}
	return 0;
}