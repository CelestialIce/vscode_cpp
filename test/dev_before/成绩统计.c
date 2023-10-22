#include <stdio.h>

int main() {
	int T, i, g9 = 0, g8 = 0, g7 = 0, g6 = 0, gl = 0;
	float sum = 0;
	scanf("%d", &T);
	int g[T] ;

	for (i = 0; i < T; i++) {
		scanf("%d", & g[i]);
		sum += g[i];
		if (g[i] >= 90)
			g9++;
		else if (g[i] >= 80)
			g8++;
		else if (g[i] >= 70)
			g7++;
		else if (g[i] >= 60)
			g6++;
		else
			gl++;
	}
	printf("%.1f %d %d %d %d %d", sum / T, g9, g8, g7, g6, gl);

	return 0;
}