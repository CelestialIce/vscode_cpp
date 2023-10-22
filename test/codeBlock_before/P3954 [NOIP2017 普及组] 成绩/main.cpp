#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double a, b, c;
    cin>>a>>b>>c;
    cout<<setiosflags(ios::fixed)<<setprecision(0);
    cout <<0.2*a+0.3*b+0.5*c;
    return 0;
}
