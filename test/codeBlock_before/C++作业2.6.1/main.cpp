#include <iostream>

using namespace std;

template <typename T>
T Myadd(T a, T b)
{
    return a+b;
}

int main()
{
    cout<<"please enter two int number"<<endl;
    int a,b;
    cin>>a>>b;
    cout<<Myadd(a,b)<<endl;
    cout<<"please enter two double number"<<endl;
    double c, d;
    cin>>c>>d;
    cout<<Myadd(c,d)<<endl;

    return 0;
}
