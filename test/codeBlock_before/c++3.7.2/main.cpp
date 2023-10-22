#include <iostream>

using namespace std;

const int foot_to_inch=12;
const double inch_to_meter=0.0254;
const double kg_to_pound=2.2;

int main()
{
    cout << "Please Enter your tall and mass" ;
    double inch,foot,pound;
    cin >>foot >>inch>>pound;
    inch+=foot*foot_to_inch;
    inch=inch*inch_to_meter;
    pound=pound/kg_to_pound;
    cout<<pound/(inch*inch);

    return 0;
}
