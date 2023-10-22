#include <stdio.h>

#include <string.h>
int len1, len2;
char s1[1005], s2[1005];
int a[1001];

void sub () {
	int i = 0, j;
	while (1) {
		if (s1[i] == '0')
			i++;
		else {
			j = i;
			break;
		}
	}
	for ( ; i < len2; i++)
		s1[i] = s1[i] - s2[i] + '0';
	for (i = len2 - 1; i > j; i--) {
		if (s1[i] < '0') {
			s1[i] += 10;
			s1[i - 1]--;
		}
	}
}

int main () {
	while (scanf("%s%s", s1, s2) != EOF) {
		int p, i;
		len1 = strlen (s1);
		len2 = strlen (s2);
		if ((len2 == 1 && s2[0] == '0') && (len1 == 1 && s1[0] == '0'))
			printf("Nan\n");
		else if (len2 == 1 && s2[0] == '0')
			printf("Inf\n");
		else if (len1 < len2 || (len1 == len2 && strncmp(s1, s2, len2) < 0))
			printf("0\n");
		else {
			p = 0;
			while (1) {
				a[p] = 0;
				while (strncmp(s1, s2, len2) >= 0) { // 减法
					sub();
					a[p]++;
				}
				p++;
				if (len1 == len2)
					break;
				for (i = len2 - 1; i >= 0; i--) //将除数的位数加一继续相减的除
					s2[i + 1] = s2[i];
				s2[0] = '0';
				len2++;
				s2[len2] = '\0';
			}
			i = 0;
			while (1) {
				if (a[i] == 0)
					i++;
				else
					break;
			}
			for ( ; i < p; i++)
				printf("%d", a[i]);
			printf("\n");
		}
	}
	return 0;
}