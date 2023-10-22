#include <stdio.h>

struct date {
	int year;
	int mouth;
	int day;
};

int main() {
	int n = 0, i = 0, k = 0, j = 0;
	scanf("%d", &n);
	struct date a[1005], t;
	for (i = 0; i < n; i++)
		scanf("%d/%d/%d", &a[i].year, &a[i].mouth, &a[i].day);
	scanf("%d", &k);
	for (i = 0; i < n - 1; i++) {
		for (j = 0; j < n - i - 1; j++) {
			if (a[j].year < a[j + 1].year || a[j].year == a[j + 1].year && a[j].mouth < a[j + 1].mouth
			        || a[j].year == a[j + 1].year && a[j].mouth == a[j + 1].mouth && a[j].day < a[j + 1].day) {
				t = a[j + 1];
				a[j + 1] = a[j];
				a[j] = t;
			}
		}
	}
	printf("%04d/%02d/%02d", a[n - k].year, a[n - k].mouth, a[n - k].day);

	return 0;
}