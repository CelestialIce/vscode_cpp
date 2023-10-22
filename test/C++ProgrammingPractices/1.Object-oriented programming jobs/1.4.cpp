#include <cstring>
#include <iostream >
using namespace std;
int fun(const char *s);

char *p = new char[20];
int main() {
	cout << fun("Hello");
	delete[] p;
	return 0;
}
int fun(const char *s) {
	strncpy(p, s, 19);
	*p = 'i';
	return *p;
}
