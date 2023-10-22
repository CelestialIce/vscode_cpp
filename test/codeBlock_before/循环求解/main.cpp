#include <iostream>

using namespace std;

int main()
{
    int x, y, sum_odd=0, sum_even=0;
    while(cin >> x >> y){
        for(int i=x;i<=y;i++){
            if(i%2==0)
                sum_even+=i*i;
            if(i%2==1)
                sum_odd+=i*i*i;
        }
        cout << sum_even << " " <<sum_odd << endl;
        sum_odd=0;
        sum_even=0;
    }
    return 0;
}
