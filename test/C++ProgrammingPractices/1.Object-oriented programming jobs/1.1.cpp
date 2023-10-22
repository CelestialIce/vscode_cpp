#include <iostream>
using namespace std;
int value = 0;
void printvalue(int value)	//要加入变量
{
	cout << "Value=" << value;
}
int main() {
	int value = 0;
	value = 1;
	cout << "Value=" << value << endl;
	value = 2;
	printvalue(value);
	return 0;
}
