#include <iostream>

using namespace std;

int gcd(int x, int y)
{
    int t;
    while(y!=0){
        t=x%y; x=y; y=t;
    }
    return  x;
}

int main()
{
    int n;
    cin >> n;
    int a, b, t;
    while(n--){
        cin >> a >> b;
        if(a<b){
            t=a; a=b; b=t;
        }
        cout << gcd(a,b)<<endl;
    }
    return 0;
}
