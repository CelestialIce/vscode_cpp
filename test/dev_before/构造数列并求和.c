#include <stdio.h>
#include <math.h>
double an(double n, int m);

int main() {//Ϊ�˷�ֹ��ʱ�������㼸�Ρ�
	float n, sum = 0, an;
	int m;
	while (scanf("%f %d", &n, &m)) {
		sum = n;
		for (int i = 0; i < m - 1; i++) {
			n = sqrt(n);
			an = n;
			if (an <= 1 + 1e-3) {
				sum += m - i - 1;//�ټ���1
				break;
			}//�߽����ó���((
			sum += an;

		}
		printf("%.2lf", sum);
		sum = 0;
	}

	return 0;
}
