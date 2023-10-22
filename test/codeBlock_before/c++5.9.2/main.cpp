#include <iostream>

using namespace std;

int main()
{
    int i,sum=0;
    cout<<"please enter a number"<<endl;
    do{
        cin>>i;
        sum+=i;
        cout<<sum<<endl;
        cout<<"please enter the next number or enter 0 to end"<<endl;
    }while(i!=0);
    return 0;
}
