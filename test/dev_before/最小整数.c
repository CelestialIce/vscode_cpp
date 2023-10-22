//这个也是抄的
#include <stdio.h>

int main() {
	int a[100]; 	//数组至少要有100个单元
	int i, j, n, flag = 1, t;		//变量定义及初始化，2分

	scanf("%d", &n);    //读取数字个数，1分
	for (i = 0; i < n; i++) //读取各个数字，1分
		scanf("%d", &a[i]);
	for (i = 0; flag && i < n - 1; i++) { //冒泡排序，6（可不设flag）
		flag = 0;
		for (j = 0; j < n - 1 - i; j++)
			if (a[j] > a[j + 1]) {
				t = a[j];
				a[j] = a[j + 1];
				a[j + 1] = t;
				flag = 1;
			}
	}
	for (i = 0; i < 100; i++) { //i指向最小的那个非0数字，1分
		if (a[i] != 0) { //与第一个0对换，2分
			a[0] = a[i];
			a[i] = 0;
			break;
		}
	}

	for (i = 0; i < n; i++) //输出，1分
		printf("%d", a[i]);

	return 0;
}
