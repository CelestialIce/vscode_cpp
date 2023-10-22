#include <iostream>

using namespace std;

int main()
{
    double money,tax;
    double level_1,level_2,level_3,level_4;
    cout<<"You can enter a number to get the tax:";
    while(cin>>money){
        if(money<0)
            break;
        if(money>35000)
            cout<<10000*0.1+20000*0.15+(money-35000)*0.20<<endl;
        else if(money>15000)
            cout<<10000*0.1+(money-15000)*0.15<<endl;
        else if(money>5000)
            cout<<money*0.1<<endl;
        else
            cout<<0<<endl;
        cout<<"Please enter another number:";
        continue;
    }

    return 0;
}
