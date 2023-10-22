#include <stdio.h>

struct cargo {
	int number;
	int stock;
	int price;
	int volume;
};

int main() {
	int n;
	struct cargo a[1000];
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d %d %d %d",
		      &a[i].number, &a[i].price,
		      &a[i].stock, &a[i].volume);
	}
	int k, s, flag = 0;
	scanf("%d %d", &k, &s);
	switch (k) {
		case 1:
			for (int i = 0; i < n; i++) {
				if (a[i].price >= s) {
					printf("%d %d %d %d\n",
					       a[i].number, a[i].price,
					       a[i].stock, a[i].volume);
					flag++;
				}

			}
			break;
		case 2:
			for (int i = 0; i < n; i++) {
				if (a[i].stock >= s) {
					printf("%d %d %d %d\n",
					       a[i].number, a[i].price,
					       a[i].stock, a[i].volume);
					flag++;
				}

			}
			break;
		case 3:
			for (int i = 0; i < n; i++) {
				if (a[i].volume >= s) {
					printf("%d %d %d %d\n",
					       a[i].number, a[i].price,
					       a[i].stock, a[i].volume);
					flag++;
				}

			}
			break;
		default:
			break;

	}
	if (flag == 0)
		printf("nothing");

	return 0;
}