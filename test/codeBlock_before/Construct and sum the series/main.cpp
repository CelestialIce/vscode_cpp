#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    int n, m;
    double sum, now;
    while(cin >> n >> m){
        now=n;
        while (now>1e-4&&m--){
            sum+=now;
            now=sqrt(now);
        }
        cout << setiosflags(ios::fixed) << setprecision(2);
        cout << sum << endl;
        sum=0;
    }


    return 0;
}
