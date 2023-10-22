#include <stdio.h>
#include <string.h>

int main() {
	char  s1[1000], s2[1000];
	while (scanf("%s%s", s1, s2) != EOF) {
		int n = strlen(s1);
		int m = strlen(s2);
		int ans = 0;
		if (n >= m) {
			for (int i = 0; i <= n - m; i++) {
				int flag = 1;
				for (int j = 0; j < m; j++) {
					if (s1[i + j] != s2[j]) {
						flag = 0;
						break;
					}
				}
				if (flag) {
					ans++;
					i = i++;
				}
			}
		}
		printf("%d time(s)\n", ans);
	}
	return 0;
}