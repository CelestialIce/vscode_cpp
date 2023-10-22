#include <iostream>

using namespace std;

int main()
{
    int n,m,sum=0;
    cin>>n;
    cin>>m;
    for(int i=n;i<=m;i++){
        sum+=i;
    }
    cout<<sum;
    return 0;
}
