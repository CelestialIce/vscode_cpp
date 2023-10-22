#include <iostream>

using namespace std;

long con(long n);
int main()
{
    long a;
    cin >>a;
    cout << con(a);

    return 0;
}
long con (long n)
{
    return n*220;
}
