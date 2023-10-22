#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

const double pi = 3.1415926;//尼玛，精度给太高了

int main()
{
    int n;
    cin >> n;
    double r;
    while(n--){
        cin >> r;
        cout<<  setiosflags(ios::fixed) ;
        cout<<setprecision(3)<<pi*r*r*r*4/3<<endl;
    }

    return 0;
}
