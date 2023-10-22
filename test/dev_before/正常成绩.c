#include <stdio.h>
#include <string.h>
#include <math.h>


int main() {
	int n;
	while (scanf("%d", &n) != EOF) {
		int x[n];
		memset(x, 0, sizeof(n));
		for (int i = 0; i < n; i++) {
			int a, b, c;
			scanf("%d %d %d", &a, &b, &c);

			double ave = (a + b + c) / 3.0;
			double s = ((a - ave) * (a - ave) + (b - ave) * (b - ave) + (c - ave) * (c - ave)) / 3.0;
			//方差的定义在与
			if (ave  >= 80 && s - 25 <= 0)
				x[i] = 1;
			else
				x[i] = 0;
		}


		int cnt = 0, max = 0;
		for (int i = 0; i < n; i++) {
			if (x[i] == 0)
				cnt = 0;
			if (x[i] != 0)
				cnt++;
			if (cnt > max)
				max = cnt;
		}
		printf("%d\n", max);


	}

	return 0;
}
/*
4
70 70 70
60 60 68
96 93 93
80 90 100
2
91 93 92
86 90 90
4
70 70 70
60 60 68
96 93 93
80 90 100
2
91 93 92
86 90 90
4
70 70 70
60 60 68
96 93 93
80 90 100
2
91 93 92
86 90 90
4
70 70 70
60 60 68
96 93 93
80 90 100
2
91 93 92
86 90 90
4
70 70 70
60 60 68
96 93 93
80 90 100
2
91 93 92
86 90 90
4
70 70 70
60 60 68
96 93 93
80 90 100
2
91 93 92
86 90 90
*/

