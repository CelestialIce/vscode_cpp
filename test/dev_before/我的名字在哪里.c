#include <stdio.h>
#include <string.h>

int main() {
	char a[1000] = {0}, b[1000] = {0};
	while (scanf("%s %s", &a, & b) != EOF) {
		int cnt = 0, k = 0, j = 0;
		j = strlen(a);
		k = strlen(b);
		if (j > k) {
			for (int i = 0; i <= j - k; i++) {
				int flag = 0;
				for (int j = 0; j < k; j++) {
					if (a[i + j] != b[j])
						flag = 1;
				}
				if (flag == 0)
					cnt++;
			}
		}
		printf("%d time(s)\n", cnt);
	}

	return 0;
}