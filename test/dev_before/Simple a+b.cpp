#include <stdio.h>

int main() {
	long a, b;
	int arr1[10] = {0}, arr2[10] = {0}, arr3[10] = {0};
	int sum = 0;
	int cnt = 0;

	scanf("%ld %ld", &a, &b);
	for (int i = 0; i < 10; i++) {
		int n;
		n = a % 10;
		a /= 10;
		arr1[i] = n;
	}
	for (int i = 0; i < 10; i++) {
		int n;
		n = b % 10;
		b /= 10;
		arr2[i] = n;
	}
	for (int i = 0; i < 10; i++) {
		arr3[i] = arr1[i] + arr2[i];
		if (arr3[i] > 9)
			arr3[i] -= 10;
	}
	for (int i = 9; i >= 0; i--) {

		sum += arr3[i];
		if (arr3[i] != 0 || cnt != 0) {
			printf("%d", arr3[i]);
			cnt++;
		}

	}
	if (sum == 0)
		printf("0");
	return 0;
}