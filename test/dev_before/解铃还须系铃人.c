#include <stdio.h>
#include <string.h>
int trans(char c);

int main() {
	char char1[10000] = {0};
	gets(char1);
	for (int i = 0; i < 10000; i++) {
		char1[i] = trans(char1[i]);
	}
	for (int i = 0; i < 10000; i++) {
		if (char1[i] == 0)
			;
		else
			printf("%c", char1[i]);
	}

	return 0;
}

int trans(char c) {
	if (c >= 'a' && c <= 'z')
		c = 122 - (c - 97);
	else if (c >= 'A' && c <= 'Z')
		c = 90 - (c - 65);

	return c;
}