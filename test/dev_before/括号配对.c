#include <stdio.h>

int main() {
	int x;
	while (scanf("%d ", &x) != EOF) {
		char a[x];
		for (int i = 0; i < x; i++) {
			scanf("%c", &a[i]);
		}
		int z = 0, y = 0;
		for (int i = 0; i < x; i++) {
			if (a[i] == '(')
				z++;
			if (a[i] == ')')
				y++;
			if (y > z)
				break;
		}
		if (y == z && z != 0 && y != 0)
			printf("Yes\n");
		else
			printf("No\n");
	}

	return 0;
}