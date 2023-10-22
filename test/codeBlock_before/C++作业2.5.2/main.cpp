#include <iostream>

using namespace std;

double max1(double a=0, double b=0, double c=0)
{
    if(a>b)
        if(a>c)
            return a;
        else
            return c;
    else
        if(b>c)
            return b;
        else
            return c;
}

double max2(double a=0, double b=0, double c=0);

int main()
{
    double a, b, c;
    cin>>a>>b>>c;
    cout<<max1(a,b,c)<<endl;
    cin>>a>>b>>c;
    cout<<max2(a,b,c)<<endl;

    return 0;
}

double max2(double a, double b, double c)
{
    if(a>b)
        if(a>c)
            return a;
        else
            return c;
    else
        if(b>c)
            return b;
        else
            return c;
}
