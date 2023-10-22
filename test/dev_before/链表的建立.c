#include <stdio.h>
#include <stdlib.h>

int main() {
	struct node {
		int data;
		struct node *next;
	};
	struct node *head, *p, *q, *t;
	int i, n, a;
	scanf("%d", &n);
	head = NULL;
	for (i = 0; i < n; i++) {
		p = (struct node *)malloc(sizeof(struct node));
		scanf("%d", &a);
		p->data = a;
		p->next = NULL;
		if (head == NULL)
			head = p;
		else
			q->next = p;
		q = p;
	}
	t = head;
	while (t != NULL) {
		printf("%d", t->data);
		t = t->next;
	}

	return 0;
}