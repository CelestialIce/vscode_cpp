#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	int t = 0;
	scanf("%d", &t);
	char a[20] = {0};
	getchar();
	for (int i = 0; i < t; i++) {
		memset(a, '0', sizeof(a));

		gets(a);
		printf("6");
		for (int i = 6; i <= 11; i++) {
			printf("%c", a[i]);
		}
		printf("\n");

	}


	return 0;
}
/*
10
13512345678
13787600321
13512345678
13787600321
13512345678
13787600321
13512345678
13787600321
13512345678
13787600321



*/