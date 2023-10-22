#include <iostream>

using namespace std;

int main()
{
    int a[100];
    int n;
    cin>>n;
    while(n--){
        int t;
        cin>>t;
        for(int i=0;i<t;i++){
            cin>>a[i];
        }
        for(int i=0;i<t;i++){
            for(int j=0;j<t-1-i;j++){
                if(a[j]>a[j+1]){ int r=a[j]; a[j]=a[j+1]; a[j+1]=r; }
            }
        }
        for(int i=0;i<t;i++)
            if(i==t-1)
                cout<<a[i]<<endl;
            else
                cout<<a[i]<<' ';
    }

    return 0;
}
