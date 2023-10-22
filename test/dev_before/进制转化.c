#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
	int T, i, j, t, sum = 0;


	scanf("%d", &T);
	getchar();//注意了，用scanf后要小心换行符，用这个抵消
	for (i = 0; i < T; i++) {
		char n[100] = {0};
		int cnt = 0;
		t = 0;
		sum = 0;
		while ((n[t] = getchar() ) != '\n' && n[t]  != ' ')
			t++;
		t -= 1;
		for (j = t  ; j >= 0; j--) {
			if (n[j] == '1')//wl
				sum += pow(2, t - j);
		}
		printf("%d\n", sum);

	}

	return 0;
}
//3 111111 111111 111111
