#include <iostream>

using namespace std;

int conv(int n);

int main()
{
    int year;
    cout << "Enter your age : " ;
    cin >> year;
    cout << conv(year)<< endl;
    return 0;
}
int conv(int n)
{
    return n*12;
}
