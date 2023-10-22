#include <iostream>
using namespace std;

struct Complex {
	int real;
	int imag;
};

void set_value(Complex &n, int real, int imag) {
	n.real = real;
	n.imag = imag;
}
void display(const Complex n) {
	cout << n.real << "+" << n.imag << 'i' << endl;
}
void addi1(Complex &a, const Complex &b) {
	a.real += b.real;
	a.imag += b.imag;
}
struct Complex addi2(const Complex a, const Complex b) {
	Complex temp{0, 0};
	temp.real = a.real + b.real;
	temp.imag = a.imag + b.imag;
	return temp;
}
struct Complex &addi3(Complex &a, const Complex b) {
	a.real += b.real;
	a.imag += b.imag;
	return a;
}
int main() {
	Complex c1, c2, c3;
	set_value(c1, 2, 4);
	set_value(c2, 4, 2);
	set_value(c3, 3, 6);
	cout << "set_value(c1,2,4)" << endl;
	cout << "set_value(c2,4,2)" << endl;
	cout << "set_value(c3,3,6)" << endl;
	display(c1);
	display(c2);
	display(c3);
	addi1(c1, c2);
	cout << "addi1(c1,c2)" << endl;
	display(c1);
	display(c2);
	cout << "addi2(c1,c3)" << endl;
	display(addi2(c1, c3));
	display(c1);
	display(c2);
	cout << "addi3(c1,c3)=c2" << endl;
	addi3(c1, c3) = c2;
	display(c1);
	display(c2);
	display(c3);

	return 0;
}
