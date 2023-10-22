#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct Link {
	char elem;
	struct Link *next;
} link;

link *initLink() {
	link *p = (link *)malloc(sizeof(link));
	link *temp = p;
	for (int i = 1; i < 5; i++) {
		link *a = (link *)malloc(sizeof(link));
		a->elem = i;
		a->next = NULL;
		temp->next = a;
		temp = temp->next;
	}
	return p;
}

int selectElem(link *p, int elem) {
	link *t = p;
	int i = 1;
	while (t->next) {
		t = t->next;
		if (t->elem == elem) {
			return i;
		}
		i++;
	}
	return -1;
}

link *amendElen(link *p, int add, int newElem) {
	link *temp = p;
	temp = temp->next;
	for (int i = 1; i < add; i++) {
		temp = temp->next;
	}
	temp->elem = newElem;
	return p;
}

link *insertElem(link *p, int elem, int add) {
	link *temp = p;
	for (int i = 1; i < add; i++) {
		if (temp == NULL) {
			printf("插入位置无效");
			return p;
		}
		temp = temp->next;
	}
	link *c = (link *)malloc(sizeof(link));
	c->elem = elem;
	c ->next = temp->next;
	temp->next = c;
	return p;

}

link *delElem(link *p, int add) {
	link *temp = p;
	for (int i = 1; i < add; i++) {
		temp = temp->next;
	}
	link *del = temp;
	temp->next = temp->next->next;
	free(del);
	return p;
}

int main() {



	return 0;
}