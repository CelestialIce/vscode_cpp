#include <stdio.h>
#include <string.h>

int main() {
	int fun(char ch[], int len);
	int t;
	scanf("%d", &t);
	getchar();
	for (int i = 0; i < t; i++) {
		char ch[50];
		gets(ch);
		int flag, len; //flag��������Ƿ�Ϸ� 1�Ϸ� 0���Ϸ�
		len = strlen(ch);
		flag = fun(ch, len);
		if (flag == 1)
			printf("yes\n");
		else
			printf("no\n");
	}

	return 0;
}

int fun(char ch[], int len) {
	int i;
	int flag = 0; //flag��������Ƿ�Ϸ� 1�Ϸ� 0���Ϸ� ��ʼ��Ϊ0���Ϸ�
	// �жϵ�һ���ַ� �����һ���ַ�������'_'or'a'~'z'or'A'~'Z'���ж� ֱ�ӵ����һ�� ���flag=0;
	if ((ch[0] == '_') || (ch[0] >= 'a' && ch[0] <= 'z') || (ch[0] >= 'A' && ch[0] <= 'Z')) {
		/*  ����Ϊʲô�����жϵ�һ���ַ���
		���Է�ֹ�����Ϊ���ַ� ����A ��������flag=0ֱ��������� �����������
		*/
		for (i = 0; i < len; i++) { //�����ַ�
			if ((ch[i] == '_') || (ch[i] >= 'a' && ch[i] <= 'z') || (ch[i] >= 'A' && ch[i] <= 'Z') || (ch[i] >= '0'
			        && ch[i] <= '9'))
				flag = 1;
			else {
				flag = 0;
				break; //�����һ���ַ������ںϷ��ַ���flag=0, ����������
			}
		}
	}
	return flag; // ��֤����ֻ��һ������
}

