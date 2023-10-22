#include <iostream>

using namespace std;

int main()
{
    double bim, m, h;
    cin>>m>>h;
    bim=m/(h*h);
    if(bim<18.5)
        cout<<"Underweight";
    else if(bim>=24)
        cout<<bim<<endl<<"Overweight";
    else
        cout<<"Normal";


    return 0;
}
