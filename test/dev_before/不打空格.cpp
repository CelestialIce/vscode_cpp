#include <stdio.h>

int main() {
	const int length = 10;
	int c;
	int cnt = 0;
	while ((c = getchar()) != EOF) {
		if (c != '\n') {//getchar Ҫ���ǻ��з�
			if (cnt == 11)
				cnt -= 10;
			cnt++;
			int t = cnt % length;
			putchar(c);
			if (t == 3 || t == 5)
				putchar(' ');
			if (t == 0)//�߽�����Ҫ����
				putchar('\n');
		}
	}
	return 0;
}