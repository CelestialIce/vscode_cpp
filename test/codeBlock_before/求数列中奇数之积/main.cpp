#include <iostream>

using namespace std;

int main()
{
    int n,a,sum=1;
    while(cin>>n){
            while(n--){
                cin>>a;
                if(a%2==1)
                    sum*=a;
            }
        cout<<sum<<endl;
    sum=1;
    }

    return 0;
}
