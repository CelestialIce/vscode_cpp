#include <stdio.h>
#include <string.h>

int main() {
	unsigned int a = 0;//初始化
	char bin[35] = {0};
	scanf("%s", &bin);
	if (strlen(bin) > 34) {
		printf("error");
		return 0;
	}
	if (bin[0] != '0' && bin[1] != 'b' && bin[0] != '0' && bin[1] != 'B') {
		printf("error");
		return 0;
	}
	for (int i = 2; i < strlen(bin); i++) {
		if (bin[i] > '9' || bin[i] < '0') {
			printf("error");
			return 0;
		}
	}
	for (int i = 2; i < strlen(bin); i++) {//判断失误
		a = a * 2 + bin[i] - '0';//进制失误
	}
	printf("%u", a);//输出要保留

	return 0;
}