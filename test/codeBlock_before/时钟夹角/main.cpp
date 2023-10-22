#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int clockwise, minute_hand, second_hand;
    float clockwise_angle, minute_hand_angle, angle;
    while(n--){
        cin >> clockwise >> minute_hand >> second_hand;
        clockwise_angle=(clockwise+minute_hand/60.0+second_hand/3600.0)/12*360;
        while(clockwise_angle>360)
            clockwise_angle-=360;
        minute_hand_angle=(minute_hand+second_hand/60.0)/60*360;
        while(minute_hand_angle>360)
            minute_hand_angle-=360;
        angle=fabs(clockwise_angle-minute_hand_angle);
        if(angle>180)
            cout << int(360-angle) << endl;
        else
            cout << int(angle) << endl;
    }


    return 0;
}
