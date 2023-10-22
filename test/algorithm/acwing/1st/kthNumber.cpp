#include <iostream>
#include <vector>

using namespace std;
vector<int> a;

int quick_sort(int l, int r, int k) {
	if (l >= r)
		return a[k];

	int x = a[l], i = l - 1, j = r + 1;
	while (i < j) {
		do i++;
		while (a[i] < x);
		do j--;
		while (a[j] > x);
		if (i < j)
			swap(a[i], a[j]);
	}
	if (k <= j)
		return quick_sort(l, j, k);
	else
		return quick_sort(j + 1, r, k);
}

int main() {
	int n, k;
	cin >> n >> k;
	a = vector<int>(n, 0);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	cout << quick_sort(0, n - 1, k - 1) << endl;

	return 0;
}
