
#include <stdio.h>
#include <string.h>

char ch[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};

int convert(int n, int m, char result[]) {
	if (n == 0)
		return 0;
	convert(n / m, m, result);
	printf("%c", ch[n % m]);


}
//void memset(char result[], int c, int n) {
//	for (int i; i < n; ++i) {
//		result[i] = '\n';
//	}
//
//}

int main() {
	int n, m, T;
	char result[1024];
	scanf("%d", &T);
	while (T--) {
		scanf("%d%d", &n, &m);
		memset(result, 0, 1024);
		convert(n, m, result);
		printf("%s\n", result);
	}
	return 0;
}

