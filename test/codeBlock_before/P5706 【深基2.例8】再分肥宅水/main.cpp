#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float t;
    int n;
    cin>>t>>n;
    float a=t/n;
    int b=n*2;
    cout<<setiosflags(ios::fixed)<<setprecision(3);
    cout<<a<<endl;
    cout<<b;

    return 0;
}
