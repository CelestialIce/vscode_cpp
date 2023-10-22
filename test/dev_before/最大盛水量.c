#include <stdio.h>
int min(int x, int y);

int main() {
	int T, i, j;
	long long s, max = 0;
	scanf("%d", &T);
	int a[T];
	for (i = 0; i < T; i++) {
		scanf("%d", &a[i]);
	}
	for (i = 0; i < T - 1; i++) {
//难不成初始化只有一次             （其实是打错了）
		for (j = i + 1; j < T; j++) {//注意一下，不要每次都打错了，检查很浪费时间
			s = (j - i) * min(a[i], a[j]);
			if (s > max)
				max = s;
		}
	}
	printf("%lld", max);

	return 0;
}

int min(int x, int y) {
	int m;
	m = x <= y ? x : y;
	return m;
}
