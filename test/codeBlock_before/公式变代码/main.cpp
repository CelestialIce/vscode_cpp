#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    int n=0;
    cin>>n;
    while(n--){
        double s,u;
        cin>>s>>u;
        double v=1.0/tan(atan(1/s)-atan(1/u));
        cout<<setiosflags(ios::fixed)<<setprecision(0);
        cout << v*u-s*u-s*v<<endl;
    }


    return 0;
}
