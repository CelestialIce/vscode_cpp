#include <stdio.h>
#include <math.h>

int main() {
	int T, i;
	scanf("%d", &T);
	for (i = 0; i < T; i++) {
		long double geol = 0, geor = 0;
		int n = 0;
		double num = 0;//�����㣬double �Ժ�ֱ����double�˲���.
		scanf("%lf", &num);
		geol = 1.0 / (1 - num);
		while (1) {//ֱ������ѭ��������for�����������
			geor += pow(num, n);//ֱ���ñ��ʽ�����ȸ�
			if (fabs(geol - geor) <= 1e-6)
				break;
			n++;
		}
		printf("%d\n", n);
	}


	return 0;
}