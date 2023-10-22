#include <stdio.h>
int pai(int *a, int i, int n, int m);

int main() {
	int n, m;
	scanf("%d%d", &n, &m);
	int a[n + 2];

	pai(a, 1, n, m);

	return 0;
}

int pai(int *a, int i, int n, int m) {
	for (int k = i; k <= n; k++) {
		if (i == 1 || k > a[i - 1]) //第一位一定填
			a[i] = k;
		else
			continue;
		if (n - k >= m - i && m - i > 0) {
			//若缺少m-i>0 m位会变成最大的（即n）
			pai(a, i + 1, n, m); //最后一位时应该特殊考虑，->全部遍历过去！   r25 solve this problem!!
		}//如果有还未填完，递归入下一次，直到全部填完
		else if (m == i) {
			//进入此处m===i！！！！
			//代表全部填完！！
			for (int j = 1; j <= m; j++)
				printf("%d ", a[j]);
			printf("\n");
		}
	}
}
