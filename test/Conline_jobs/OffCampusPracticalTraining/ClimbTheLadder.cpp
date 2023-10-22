#include <iostream>
using namespace std;
const int N=100000,MOD=1e9+7;
int a[N];

int stairs(int n)
{
    if (a[n]) return a[n];
    if(n<=1) {
        a[n]=1;
        return 1;
    }
    a[n]=stairs(n-1)+stairs(n-2);
    a[n]%=MOD;
    return a[n];
}
int main()
{
    int n=0;
    cin>>n;
    cout<<stairs(n);

}