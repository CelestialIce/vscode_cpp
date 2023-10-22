#include <iostream>
#include<cmath>
using namespace std;

double tiaohe(double x,double y){
    return 2.0*x*y/(x+y);
}


int main()
{
    double x,y;
    cout<<"Please enter two numbers ";
    while(cin>>x>>y){
        if(abs(x)<1e-6||abs(y)<1e-6){
            cout<<"exit";
            break;
        }
        cout<<tiaohe(x,y)<<endl;
        cout<<"Please enter another numbers ";
    }
    return 0;
}
