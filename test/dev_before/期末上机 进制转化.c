#include <stdio.h>
#include <string.h>

const char a[30] = "0ABCDEFGHIJKLMNOPQRSTUVWXYZ";

void jc(int n, int m) {
	if (n == 0) {
		return 0 ;
	}

	jc(n / 26, m);
	printf("%c", a[n % 26]);


}

int main() {
	int n;
	scanf("%d", &n);
	jc(n, 0);


	return 0;
}