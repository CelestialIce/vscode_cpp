#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n = 0;
    while (cin >> n){
        int *a = new int [n];
        for(int i = 0; i < n; i++)
            cin >> a[i];
        int max=a[0], min=a[0];
        for(int i = 0; i < n; i++){
            if(max<a[i])
                max=a[i];
            if(min>a[i])
                min=a[i];
        }
        double sum=0, aver=0;
        for(int i=0;i<n;i++)
            sum+=a[i];
        sum-=min+max;
        aver = sum /double(n-2);
        cout << setiosflags(ios::fixed) << setprecision(2);
        cout << aver << endl;

        delete [] a;
    }



    return 0;
}
