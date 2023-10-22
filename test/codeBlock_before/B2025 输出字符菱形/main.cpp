#include <iostream>

using namespace std;

int main()
{
    char a;
    cin>>a;
    for(int i=1;i<=3;i++){
        for(int j=0;j<3-i;j++){
            cout<<' ';
        }
        for(int j=0;j<2*i-1;j++){
            cout<<'a';
        }
        cout<<endl;
    }
    for(int i=2;i>0;i--){
        for(int j=0;j<3-i;j++){
            cout<<' ';
        }
        for(int j=0;j<2*i-1;j++){
            cout<<'*';
        }
        cout<<endl;
    }

    return 0;
}
