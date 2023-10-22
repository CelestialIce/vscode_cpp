#include <iostream>
#include <algorithm>
#define MAX(a,b) ((a)>(b) ? (a):(b))
#define ABS(a) ((a)>=0 ? (a) : (0-(a)))
#define SWAP(d,f) swap(d,f)

using namespace std;

int main()
{
    int a, b, d, f;
    float c;
    cin>>a>>b>>c>>d>>f;
    cout<<MAX(a,b)<<endl;
    cout<<ABS(c)<<endl;
    SWAP(d,f);
    cout<<d<<' '<<f<<endl;
    return 0;
}
