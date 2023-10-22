#include <iostream>

using namespace std;

int main()
{
    int n, a;
    cin>>a;
    if(a%2==0)
        n++;
    if(a>4&&a<=12)
        n++;
    if(n==2)
        cout<<1<<' ';
    else
        cout<<0<<' ';
    if(n!=0)
        cout<<1<<' ';
    else
        cout<<0<<' ';
    if(n==1)
        cout<<1<<' ';
    else
        cout<<0<<' ';
    if(n==0)
        cout<<1;
    else
        cout<<0;

    return 0;
}
