#include <stdio.h>

int main() {
	int t;
	while (scanf("%d", &t) != EOF) {
		char a[100] = {0};
		int m1 = -1, m2 = -1, m3 = -1;
		gets(a);
		for (int i = 0; i < 100; i++) {
			if (a[i] > m1 && a[i] != ' ') {
				m3 = m2;
				m2 = m1;
				m1 = a[i];
			}
			if (a[i] == m1 && a[i] != ' ')
				continue;
			if (a[i] > m2 && a[i] != ' ' && a[i] != 0)
				m2 = a[i];
		}
		if (m2 == -1)
			printf("-1\n");
		else if (m2 != -1)
			printf("%d\n", m2 - '0');


	}
	return 0;
}