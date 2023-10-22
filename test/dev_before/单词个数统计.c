#include <stdio.h>
#include <string.h>

int main() {
	int word = 0, sum = 0;
	char a[100001] = {};
	for (int i = 0; i < 100001; i++) {
		a[i] = ' ';
	}
	gets(a);
	for ( unsigned int i = 0; i < strlen(a) ; ) {
		if (a[i] == ' ' || a[i] == ',' || a[i] == '.') {
			i++;
			continue;
		}
		while (a[i] >= 'a' && a[i] <= 'z' || a[i] >= 'A' && a[i] <= 'Z') {
			i++;
			word = 1;
		}
		if (word == 1) {
			word = 0;
			sum += 1;
		}

	}

	printf("%d", sum);


	return 0;
}
