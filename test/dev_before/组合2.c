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
		if (i == 1 || k > a[i - 1]) //��һλһ����
			a[i] = k;
		else
			continue;
		if (n - k >= m - i && m - i > 0) {
			//��ȱ��m-i>0 mλ�������ģ���n��
			pai(a, i + 1, n, m); //���һλʱӦ�����⿼�ǣ�->ȫ��������ȥ��   r25 solve this problem!!
		}//����л�δ���꣬�ݹ�����һ�Σ�ֱ��ȫ������
		else if (m == i) {
			//����˴�m===i��������
			//����ȫ�����꣡��
			for (int j = 1; j <= m; j++)
				printf("%d ", a[j]);
			printf("\n");
		}
	}
}
