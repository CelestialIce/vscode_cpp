#include <stdio.h>

int main() {
	int n, i;
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		for (int t = 1; t <= i; t++) {//��һ�����������õ���һ��ѭ����ÿ��ֻ���Լ�
			printf("%d*%d=%d ", t, i, i * t);
		}
		printf("\n");
	}



	return 0;
}