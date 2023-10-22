#include <iostream>
using namespace std;
int main()
{
    int x, r = 0, cnt = 0;
    while(cin >> x&&x!='\n'){
        if(cnt == 0) {
            r = x;
            cnt = 1;
        }
        else if(r == x)
            cnt++;
        else
            cnt--;
    }
    cout << r << endl;
    return 0;
}
