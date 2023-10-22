#include <iostream>
using namespace std;
int f(const int *p)
  {
    int y;
    y=(*p)*2;
    return y;
}
int main( )
{
    int x;
    x=10;
    cout<<x+f(&x)<<end;
    return 0;
}
