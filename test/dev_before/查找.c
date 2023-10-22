#include <stdio.h>

void find_two_largest(int a[], int n, int *largest, int *second_largest) {
	int max1 = -2147483648, max2 = -2147483648;
	for (int i = 0; i < n; i++) {
		if (a[i] > max1) {
			max1 = a[i];
		}
	}
	for (int i = 0; i < n; i++) {
		if (a[i] > max2 && a[i] != max1)
			max2 = a[i];
	}

	*largest = max1;
	*second_largest = max2;

}

int main() {
	int i, n, arr[100], largest, second_largest;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d", &arr[i]);
	find_two_largest(arr, n, &largest, &second_largest);
	printf("%d %d", largest, second_largest);
	return 0;
}

