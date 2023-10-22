#include <stdio.h>
#include <math.h>

struct Point {
	int x;
	int y;
};

double GetMaxAngle(struct Point pts[], int n) {
	int i, j, k;
	double a, b, c, t;
	double cos, mincos = 1;
	for (i = 0; i < n - 2; i++) {
		for (j = i + 1; j < n - 1; j++) {
			for (k = j + 1; k < n; k++) {
				a = sqrt((pts[i].x - pts[j].x) * (pts[i].x - pts[j].x) + (pts[i].y - pts[j].y) * (pts[i].y - pts[j].y));
				b = sqrt((pts[k].x - pts[j].x) * (pts[k].x - pts[j].x) + (pts[k].y - pts[j].y) * (pts[k].y - pts[j].y));
				c = sqrt((pts[i].x - pts[k].x) * (pts[i].x - pts[k].x) + (pts[i].y - pts[k].y) * (pts[i].y - pts[k].y));
				if (a < b) {
					t = a;
					a = b;
					b = t;
				}
				if (b < c) {
					t = b;
					b = c;
					c = t;
				}
				if (a < b) {
					t = a;
					a = b;
					b = t;
				}
				cos = (b * b + c * c - a * a) / (2 * b * c) ;
				if (cos < mincos)
					mincos = cos;
			}
		}
	}
	return acos(mincos);
}

int main() {
	int i, n;
	struct Point pts[50];

	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d%d", &pts[i].x, &pts[i].y);

	printf("%.6f", GetMaxAngle(pts, n));

	return 0;
}
