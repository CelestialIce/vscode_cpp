#include <stdio.h>
#include <string.h>

int main() {
	char a[1000] = {0};
	int i = 0;
	int flag = 0, temp = 0;
	scanf("%s", &a);
	while (a[i] != '0') {
		if (a[i] < '0' || a[i] > '9') {
			i++;
			flag += temp;
			temp = 0;
			continue;
		} else {
			temp = temp * 10 + a[i] - '0';
			i++;
		}


	}
	printf("%d", flag);

	return 0;
}