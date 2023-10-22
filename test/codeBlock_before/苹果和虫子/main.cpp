#include <iostream>

using namespace std;

int main()
{
    int m, t, s;
    cin>>m>>t>>s;
    if(t==0)
        cout<<0;
    else if(m-s/t<0)
    //两个陷阱,一个是时间为0无法除
    //一个是输出小于零不符合实际情况
        cout<<0;
    else if(s%t!=0)
        cout<<m-s/t-1;
    else
        cout<<m-s/t;

    return 0;
}
