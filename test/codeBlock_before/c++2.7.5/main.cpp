#include <iostream>

using namespace std;

double ctof(double n);

int main()
{
    double c;
    cout << "Please enter a Celsius value : ";
    cin >> c;
    cout << c << " degrees Celsius is " << ctof(c) << " degrees Fahreheit" << endl;
    return 0;
}

double ctof(double n)
{
    return 1.8*n+32;
}
