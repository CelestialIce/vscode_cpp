/* two_func.c --һ���ļ��а�����������*/
#include <stdio.h>

int bulfter();/*����ԭ��*/
int main() {
	printf("I will sommon the butler function.\n");
	butler();
	printf("yes.Bring me some tea and writeable DVDs.\n");

	return 0;
}

int butler() { /*�������忪ʼ*/
	printf("You rang,sir?\n");
}