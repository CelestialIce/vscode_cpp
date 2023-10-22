#include <stdio.h>

int main() {
	const int length = 10;
	int c;
	int cnt = 0;
	while ((c = getchar()) != EOF) {
		if (c != '\n') {//getchar 要考虑换行符
			if (cnt == 11)
				cnt -= 10;
			cnt++;
			int t = cnt % length;
			putchar(c);
			if (t == 3 || t == 5)
				putchar(' ');
			if (t == 0)//边界条件要考虑
				putchar('\n');
		}
	}
	return 0;
}