#include <iostream>

using namespace std;

int main()
{
    int s, v;
    cin>>s>>v;
    int t;
    if(s%v!=0)
        t=s/v+1;
    else{
        t=s/v;
    }
    t+=10;
    int h=t/60;
    int m=t%60;
    int h1=8;
    int m1=0-m;
    if(m1<0){
        h1-=1;
        m1+=60;
    }
    h1-=h;
    if(h1<0)
        h1+=24;
    if(h1<10)
        if(m1<10)
            cout<<0<<h1<<':'<<0<<m1;
        else
            cout<<0<<h1<<':'<<m1;
    else
        if(m1<10)
            cout<<h1<<':'<<0<<m1;
        else
            cout<<h1<<':'<<m1;


    return 0;
}
