#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    while(cin>>n&&n!=0)
    {
        int sum=0, a=0, mo=0;
        int ave=0;
        int temp=n;
        int *arr=new int [n];
        for(int i=0;temp--;i++)
        {
          cin>>  a;
          arr[i]=a;
          sum+=a;
        }
        ave=sum/n;
        for(int i=0;i<n;i++){
            mo+=abs(arr[i]-ave);
        }
        cout << mo/2<<endl<<endl;
    }


    return 0;
}
