#include <iostream>

using namespace std;

int is_leap_year(int n){
    if(n%4==0&&(n%100!=0||n%400==0))
        return 1;
    else
        return 0;
}

int main()
{
    const int a[]{31,28,31,30,31,30,31,31,30,31,30,31};
    int y, m;
    cin>>y>>m;
    if(is_leap_year(y)){
        if(m==2)
            cout<<a[m-1]+1;
        else
            cout<<a[m-1];
    }
    else
            cout<<a[m-1];


    return 0;
}
