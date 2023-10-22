#include <stdio.h>
#include <string.h>

int main() {
	int n = 0, i = 0, j = 0, cnt = 0, k = 0;
	char a[21] = {0};
	char b[n][11] ;
	char temp[11], t[11];
	scanf("%d", &n);
	getchar();
	gets(a);
	for (i = 0; i < n; i++)
		gets(b[i]);
	for (i = 0; i < n; i++) {
		memset(temp, 0, sizeof(temp));

		for (j = 0; j < (int)strlen(b[i]); j++)
			temp[j] = b[i][j];


		for (j = 0; j < (int)strlen(a); j++) {
			memset(t, 0, sizeof(t));
			strncpy(t, a, (int)strlen(b[i]));
			if (strcmp(t, temp) == 0)
				cnt++;
		}
	}
	printf("%d", cnt);

	return 0;
}