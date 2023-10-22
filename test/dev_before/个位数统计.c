#include <stdio.h>
#include <string.h>

int main() {
	char a[10000];
	scanf("%s", &a);
	int len = strlen(a);
	int cnt[10], i;
	for (i = len - 1; i > 0; i--) {
		if (a[i] == '0') {
			len--;
		}
		if (a[i] != '0') {
			break;
		}
	}
	for (i = 0; i < len; i++) {
		cnt[a[i] - '0']++;
	}
	for (i = 0; i < 10; i++) {
		if (cnt[i] == 0)
			continue;
		printf("%d:%d\n", i, cnt[i]);
	}


	return 0;
}