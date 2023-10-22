#include <stdio.h>

int main() {
	int hour, min;
	int n = 0;
	while (scanf("%d:%d", &hour, &min) != EOF) {
		if (hour = 24 || hour == 0)
			printf("0:0 AM");
		else {
			if (hour > 12) {
				hour %= 12;
				n++;
			}
			if (n)
				printf("%d:%d PM", hour, min);
			else
				printf("%d:%d AM", hour, min);
		}
	}

	return 0;
}