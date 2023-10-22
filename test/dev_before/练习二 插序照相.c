#include <stdio.h>
#include <string.h>

int main() {
	struct Guest {
		char name[32];
		int height;
	} g[20], tg[20], t;

	int i, j, N, min;
	scanf("%d", &N);

	for (i = 0; i < N; i++)
		scanf("%s,%d", g[i].name, &g[i].height);
	for (i = 0; i < N - 1; i++) {
		min = i;
		for (j = i + 1; j < N; j++)
			if (g[j].height < g[min].height
			        || (g[i].height == g[min].height
			            && strcmp(g[j].name, g[min].name) < 0))
				min = j;
		if (min != i) {
			t = g[i];
			g[i] = g[min];
			g[min] = t;
		}
	}
	for (i = 0, j = 0; i < N; i += 2, j++) {
		tg[j] = g[i];
		if (i + 1 < N)
			tg[N - 1 - j] = g[i + 1];
	}
	for (i = 0; i < N; i++)
		printf("(%s,%d)", tg[i].name, tg[i].height);
	return 0;
}/*
5
Zhang,170 Li,182 Wang,170 Zhao,175 Qian,176
*/