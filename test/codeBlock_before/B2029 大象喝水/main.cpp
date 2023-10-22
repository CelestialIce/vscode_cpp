#include <iostream>

using namespace std;

int main()
{
    double v, r, h;
    cin>>h>>r;
    const double pi=3.14;
    v=r*r*pi*h*1e-3;
    double t=20/v;
    if(t-int(t)<1e-6)
        cout<<int(t);
    else
        cout<<int(t)+1;

    return 0;
}
