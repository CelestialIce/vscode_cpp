#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void get_next(int *next, char *pattern);
int KMP(char *text, char *pattern, int *next, int I);
void change_next(int *next, char *pattern);

int main() {
	char text[10000], pattern[10000];
	fgets(text, sizeof(text), stdin);
	text[strcspn(text, "\n")] = 0;	
	fgets(pattern, sizeof(pattern), stdin);
	pattern[strcspn(pattern, "\n")] = 0;  

	int *next = (int *)malloc(sizeof(int) * strlen(pattern));
	get_next(next, pattern);

	for (int i = 0; i <= strlen(text) - strlen(pattern); i++) {
		i = KMP(text, pattern, next, i);
		if (i == -1)
			break;
	}

	change_next(next, pattern);
	printf("%d", next[0]);

	for (int i = 1; i < strlen(pattern); i++) {
		printf(" %d", next[i]);
	}

	free(next);
	return 0;
}

void get_next(int *next, char *pattern) {
	next[0] = -1;
	int i = 0, k = -1;

	while (i < strlen(pattern)) {
		if (k == -1 || pattern[i] == pattern[k]) {
			i++;
			k++;
			next[i] = k;
		} else {
			k = next[k];
		}
	}
}

int KMP(char *text, char *pattern, int *next, int I) {
	int i = I, j = 0;

	while (i <= strlen(text) - strlen(pattern)) {
		if (j == -1 || text[i] == pattern[j]) {
			i++;
			j++;
		} else {
			j = next[j];
		}

		if (j == strlen(pattern)) {
			printf("%d\n", i - j + 1);
			return i - strlen(pattern);
		}
	}

	return -1;
}

void change_next(int *next, char *pattern) {
	int temp = next[strlen(pattern) - 2];

	for (int i = 0; i < strlen(pattern) - 1; i++) {
		next[i] = next[i + 1];
	}

	if (pattern[strlen(pattern) - 1] == pattern[temp]) {
		next[strlen(pattern) - 1] = next[strlen(pattern) - 2] + 1;
	} else {
		next[strlen(pattern) - 1] = 0;
	}
}
