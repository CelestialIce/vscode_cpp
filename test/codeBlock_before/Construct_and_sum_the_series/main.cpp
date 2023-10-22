#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    int n, m;
    float sum=0, now;//编程float就好了，真麻烦
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
