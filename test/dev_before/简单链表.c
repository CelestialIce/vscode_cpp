#include <stdio.h>
#include <stdlib.h>

int main() {
	struct node {
		int data;
		struct node *next;
	};
	struct node *head, *p, *q, *t;
	int i, n, a;
	head = NULL;
	for (i = 0;; i++) {
		p = (struct node *)malloc(sizeof(struct node));
		scanf("%d", &a);
		if (a == 0)
			break;
		p->data = a;
		p->next = NULL;
		if (head == NULL)
			head = p;
		else
			q->next = p;
		q = p;
	}
	t = head;
	int flag = 0;
	while (t != NULL) {
		if (t->data % 2 == 0) {
			printf("%d ", t->data);
			flag++;
		}
		t = t->next;
	}
	if (flag == 0)
		printf("Empty");

	return 0;
}