#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double n;
    while(cin>>n){
        cout << setiosflags(ios::fixed)<<setprecision(2);
        cout << fabs(n)<<endl;
    }

    return 0;
}
