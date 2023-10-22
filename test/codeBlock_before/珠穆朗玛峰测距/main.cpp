#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--){
        float x, y, m, n;
        cin>>x>>y>>m>>n;
        float dis=sqrt(x*x+y*y+m*m+n*n-2*m*x-2*n*y);
        cout<<setiosflags(ios::fixed)<<setprecision(1);
        cout<<dis<<endl;
    }



    return 0;
}
