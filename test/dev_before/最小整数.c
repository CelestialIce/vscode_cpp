//���Ҳ�ǳ���
#include <stdio.h>

int main() {
	int a[100]; 	//��������Ҫ��100����Ԫ
	int i, j, n, flag = 1, t;		//�������弰��ʼ����2��

	scanf("%d", &n);    //��ȡ���ָ�����1��
	for (i = 0; i < n; i++) //��ȡ�������֣�1��
		scanf("%d", &a[i]);
	for (i = 0; flag && i < n - 1; i++) { //ð������6���ɲ���flag��
		flag = 0;
		for (j = 0; j < n - 1 - i; j++)
			if (a[j] > a[j + 1]) {
				t = a[j];
				a[j] = a[j + 1];
				a[j + 1] = t;
				flag = 1;
			}
	}
	for (i = 0; i < 100; i++) { //iָ����С���Ǹ���0���֣�1��
		if (a[i] != 0) { //���һ��0�Ի���2��
			a[0] = a[i];
			a[i] = 0;
			break;
		}
	}

	for (i = 0; i < n; i++) //�����1��
		printf("%d", a[i]);

	return 0;
}
