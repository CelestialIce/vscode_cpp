#include <iostream>

using namespace std;

const int degrees_to_minutes=60;
const int minutes_to_second=60;


int main()
{
    double degrees,minutes,seconds;
    cout << "First enter degrees" ;
    cin>>degrees;
    cout <<"Next enter minutes";
    cin>>minutes;
    cout << "Finally enter seconds";
    cin>>seconds;
    cout<<degrees+minutes/degrees_to_minutes+
    seconds/minutes_to_second/degrees_to_minutes;

    return 0;
}
