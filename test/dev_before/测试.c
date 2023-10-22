/* two_func.c --一个文件中包含两个函数*/
#include <stdio.h>

int bulfter();/*函数原型*/
int main() {
	printf("I will sommon the butler function.\n");
	butler();
	printf("yes.Bring me some tea and writeable DVDs.\n");

	return 0;
}

int butler() { /*函数定义开始*/
	printf("You rang,sir?\n");
}