#include <iostream>

using namespace std;

double ltotw(double n);

int main()
{
    double lightyear;
    cout << "Enter the number of light years: " ;
    cin >> lightyear;
    cout << lightyear << " light years = "
        <<ltotw(lightyear) <<" astronomical units."<< endl;
    return 0;
}
double ltotw(double n)
{
    return n*63240;
}
