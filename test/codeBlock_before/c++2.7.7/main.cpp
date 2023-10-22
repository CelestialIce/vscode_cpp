#include <iostream>

using namespace std;

void printime(int m,int s);

int main()
{
    int m,s;
    cout << "Enter the number of hours: " ;
    cin >> m;
    cout << "Enter the number of minutes: " ;
    cin >> s;
    printime(m,s);

    return 0;
}
void printime(int m,int s)
{
    cout << "Time: "<< m <<":"<<s;
}
