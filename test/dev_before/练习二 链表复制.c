#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct N {
	char s[81];
	struct N *next;
};

int t(char *s) {
	char *q = s;
	char min = *q;
	while (*q) {
		if (min > *q)
			min = *q;
		q++;
	}
	int n = 0;
	q = s;
	while (*q) {
		if (*q == min)
			n++;
		q++;
	}
	return n;
}

struct N *ex(struct N *A, int n) {
	struct N *B = NULL, *p1, *p;
	while (A != NULL) {
		if (t(A->s) == n) {
			p = (struct N *)malloc(sizeof(struct N));
			strcpy(p->s, A->s);
			p->next = NULL;
			if (B == NULL)
				B = p;
			else
				p1 = p;
		}
		A = A->next;
	}
	return B;
}