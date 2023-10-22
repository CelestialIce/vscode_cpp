#include <stdio.h>
void pprint(int n);

int main() {
	int T;
	int n;
	int g;

	scanf("%d", &T);
	for (int t = 0; t < T; t++) {
		scanf("%d", &n);
		void pprint(n);
	}

	return 0;
}

void pprint(int n) {
	while (n != 0) {
		int g;
		g = n % 10;
		n /= 10;
		printf("1");
		switch (g) {
			case 0:
				printf("zero ");
				break;
			case 1:
				printf("one ");
				break;
			case 2:
				printf("two ");
				break;
			case 3:
				printf("three ");
				break;
			case 4:
				printf("four ");
				break;
			case 5:
				printf("five ");
				break;
			case 6:
				printf("six ");
				break;
			case 7:
				printf("seven ");
				break;
			case 8:
				printf("eight ");
				break;
			case 9:
				printf("nine ");
				break;
		}

	}
	printf("\n");
}