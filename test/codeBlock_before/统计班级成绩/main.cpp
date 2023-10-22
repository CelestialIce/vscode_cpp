#include <iostream>
#include <iomanip>
#include <string.h>

using namespace std;

int main()
{
    int n, m;
    double a[51][7]{0};
    while(cin>>n>>m){
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
                cin>>a[i][j];
        double ave_stu=0,ave_les=0;
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++){
                a[i][5]+=a[i][j];
                a[50][j]+=a[i][j];
            }
        cout<<setiosflags(ios::fixed)<<setprecision(2);
        for(int i=0;i<n;i++){
            if(i==n-1)cout<<a[i][5]/m<<endl;
            else      cout<<a[i][5]/m<<' ';
        }
        for(int i=0;i<m;i++){
            if(i==m-1)cout<<a[50][i]/n<<endl;
            else      cout<<a[50][i]/n<<' ';
        }
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
                if(a[i][j]>=a[50][i]/n)
                    a[i][6]++;
        int sum=0;
        for(int i=0;i<n;i++)
            if(a[i][6]==m)
            sum++;
    cout<<sum<<endl;
        memset(a,0,sizeof(a));
    }


    return 0;
}
