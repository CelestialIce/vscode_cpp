#include <stdio.h>

int taozi(int i, int n) {
	if (n == 0)
		return 1;
	int t = i % 5;
	if (t == 1) {
		n--;
		taozi((i - 1) * 4 / 5, n);
	} else
		return 0;

}

int main() {
	int i = 5;
	for (;; i++) {
		if (taozi(i, 5) == 1)
			break;
	}
	printf("%d", i);


	return 0;

}