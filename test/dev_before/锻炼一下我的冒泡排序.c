#include <stdio.h>

int main() {
	int a[5] = {13, 23, 1, 9, 6};
	int j, i, t;
	for (j = 1; j < 5; j++) {
		for (i = 0; i < 5 - j; i++) {
			if (a[i] > a[i + 1]) {
				t = a[i + 1] ;
				a[i + 1] = a[i];
				a[i] = t;
			}
		}
	}
	for (i = 0; i < 5; i++) {
		printf("%d ", a[i]);
	}


	return 0;
}