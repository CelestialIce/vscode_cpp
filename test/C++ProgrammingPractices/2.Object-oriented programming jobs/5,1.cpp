#include <iostream>
#include <cmath>

using namespace std;

double space(double x)
{
    return x*x;
}

double space(double x, double y)
{
    return x*y;
}

double space(double x, double y, double h)
{
    return (x+y)*h/2;
}

double space_of_triangle(double l1,double l2, double p)
{
    return l1*l2*sin(p)/2;
}

int main()
{
    int a,b,c;
    cout<<"please enter the length of square"<<endl;
    cin>>a;
    cout<<space(a)<<endl;
    cout<<"please enter the lengths of rectangle"<<endl;
    cin>>a>>b;
    cout<<space(a,b)<<endl;
    cout<<"please enter the lengths and height of trapezium"<<endl;
    cin>>a>>b>>c;
    cout<<space(a,b,c)<<endl;
    cout<<"please enter the lengths and angle of triangle"<<endl;
    cin>>a>>b>>c;
    cout<<space_of_triangle(a,b,c)<<endl;


    return 0;
}
