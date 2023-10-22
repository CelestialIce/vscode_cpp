#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d;
    int t, e, f;
    cin>>a>>b>>c>>d;
    t=c*60-a*60+d-b;
    e=t/60;
    f=t%60;
    cout<<e<<' '<<f;

    return 0;
}
