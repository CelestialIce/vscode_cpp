#include <stdio.h>

int main() {
	int N, i, j, cnt, sum;
	scanf("%d", &N);
	char a[N][12];
	for ( i = 0; i < N; i++) {
		scanf("%s", &a[i]);
	}
	sum = 0;
	for (i = 0; i < N; i++) {
		cnt = 0;
		for (j = 0; j < 11; j++) {
			if (a[i][j] == a[i][10 - j])
				cnt++;
		}
		if (cnt == 11)
			sum++;
	}
	printf("%d", sum);

	return 0;
}