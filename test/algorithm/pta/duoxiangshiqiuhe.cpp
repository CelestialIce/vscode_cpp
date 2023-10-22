#include <iomanip>
#include <iostream>
using namespace std;

int main() {
	int n;
	double x0, coef;
	cin >> n >> x0;	 // 读取多项式的次数和x的取值

	double result = 0.0;  // 存储多项式求值结果
	for (int i = n; i >= 0; --i) {
		cin >> coef;				  // 读取多项式的系数
		result = result * x0 + coef;  // 使用霍纳法则求值
	}

	// 输出结果，保留三位小数
	cout << fixed << setprecision(3) << result << endl;

	return 0;
}
