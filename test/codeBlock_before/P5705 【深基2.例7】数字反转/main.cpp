#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float a;
    cin>>a;
    int b;
    b=int(a);
    a-=b;
    a*=10;
    int c[3];
    for(int i=0;i<3;i++){
        c[3-i-1]=b%10;
        b/=10;
    }
    for(int i=0;i<3;i++){
        b=b*10+c[3-i-1];
    }
    float d=(float)(b)/1000;
    cout<<setiosflags(ios::fixed)<<setprecision(3);
    cout<<float(a)+d;

    return 0;
}
