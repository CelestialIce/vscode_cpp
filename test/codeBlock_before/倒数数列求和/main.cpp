#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n, m;
    cin >> n;
    double sum, num=1;
    while(cin >> m){
        for(int i=1;i<=m;i++){
            if(i%2==1)
                sum+= 1/double(i);
            if(i%2==0)
                sum+=-1/double(i);
        }
        cout << setiosflags(ios::fixed) << setprecision(2);
        cout << sum << endl;
        sum=0;
    }

    return 0;
}
