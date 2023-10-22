#include <iostream>
using namespace std;
float temp;
float fn1(const float r) {
	temp = r * r * 3.14;
	return temp;
}
float& fn2(const float r) {
	temp = r * r * 3.14;
	return temp;
}
int main(void) {
	float a = fn1(5.0);	 // 1
	float n = 5.0;
	float& b = fn2(n);	 // 2:
	float c = fn2(5.0);	 // 3
	float& d = fn2(n);	 // 4
	cout << a << endl;
	cout << b << endl;
	cout << c << endl;
	cout << d << endl;
	return 0;
}
