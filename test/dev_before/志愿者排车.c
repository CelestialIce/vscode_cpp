#include <stdio.h>

int main() {
	int T, t, a, b, i;
	int c[100] = {0};
	scanf("%d", &T);//取地址符号
	for (t = 0; t < T; t++) {
		scanf("%d %d", & a, & b);
		for (i = a; i <= b; i++) {
			c[i] += 1;
		}
	}
	T = 0;
	for (i = 0; i < 100; i++) {
		if (c[i] == 0)//两个等号
			T++;
	}
	printf("%d", T);

	return 0;
}