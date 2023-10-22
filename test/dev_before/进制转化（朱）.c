#include <stdio.h>
#include <math.h>

int main() {
	int arr[32] = {0};
	int arr1[32] = {0};
	int sum1 = 0;
	long long sum = 0;
	int num = 0;
	int j = 0;
	scanf("%d", &num);
	getchar();
	for (int x = 0; x < num; x ++) {
		sum = 0;
		j = 0;
		for (int i = 0; i < 32; i ++) {
			arr[i] = getchar();
			if (arr[i] == '\n')
				break;
			if (arr[i] == '0') {
				j ++;
				arr1[i] = 0;
			}
			if (arr[i] == '1') {
				j ++;
				arr1[i] = 1;
			}
		}
		for (int i = 0; i < j; i ++) {
			if (arr1[i] == 1)
				sum += pow(2, j - i - 1);
		}
		printf("%lld\n", sum);
	}
	return 0;
}

