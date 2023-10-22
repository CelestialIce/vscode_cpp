#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int b, r, c, d, e;
    cin >> r >> b >> c >> d >> e;
    if(d+c>=2*e){
        cout<<b*d+c*r;
        return 0;
    }
    else{
        if(r==b){
            cout<<2*r*e;
            return 0;
        }
        if(r>b){
            cout<<2*b*e+(r-b)*c;
            return 0;
        }
        if(r<b){
            cout<<2*r*e+(b-r)*d;
            return 0;
        }

    }
    return 0;

}
