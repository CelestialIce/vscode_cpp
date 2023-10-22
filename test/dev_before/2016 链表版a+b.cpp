#include <stdio.h>
#include <stdlib.h>
#define len sizeof(struct num)

struct num {
	int i;
	struct num *next;
	struct num *before;
};

struct num *creat(unsigned long n) {
	struct num *p1, *p2;
	p1 = p2 = (struct num *)malloc(len);
	p1 = p2 = (struct num *)malloc(len);
	p1->i = n % 10;
	p1->next = NULL;
	n /= 10;
	while (n) {
		p1 = (struct num *)malloc(len);
		p1->i = n % 10;
		p1->next = p2;
		p2->before = p1;
		p2 = p1;
		n /= 10;
		p2->before = NULL;
		return p2;
	}
}

struct num *SimpleAdd(struct num *p, struct num *q) {
	struct num *p1, *p2;
	while (p->next != NULL)
		p = p->next;
	while (q->next != NULL)
		q = q->next;
	p2 = p1 = (struct num *)malloc(len);
	p1->i = (p->i + q->i) % 10;
	p1->next = NULL;
	p = p->before;
	q = q->before;
	while (p && q) {
		p1 = (struct num *)malloc(len);
		p1->i = (p->i + q->i) % 10;
		p1->next = p2;
		p2->before = p1;
		p2 = p1;
		p = p->before;
		q = q->before;
	}
	if (q == NULL && p != NULL) {
		p2->before = p;
		p->next = p2;
	}
	if (q != NULL && p == NULL) {
		p2->before = q;
		q->next = p2;
	}
	if (p == NULL && q == NULL)
		p2->before = NULL;
	while (p2->before)
		p2 = p2->before;
	while (p2->i == 0 && p2->next != NULL) {
		p1 = p2;
		p2 = p2->next;
		p2->before = NULL;
		free(p1);
	}
	return p2;
}

int main() {
	unsigned long n, m;
	struct num *p, *q, *sum;
	scanf("%ld %ld", &n, &m);
	p = creat(n);
	q = creat(m);
	sum = SimpleAdd(p, q);
	while (sum) {
		printf("%d", sum->i);
		sum = sum->next;
	}
	return 0;
}



