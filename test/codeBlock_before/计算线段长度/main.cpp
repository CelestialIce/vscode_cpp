#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int x1,y1,x2,y2;
    double dis;
    while(n--){
        cin >> x1 >> y1 >> x2 >> y2;
        dis=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
        cout<<fixed;
        cout.precision(2);
        cout << dis <<endl;
        dis=0;
    }
    return 0;
}
