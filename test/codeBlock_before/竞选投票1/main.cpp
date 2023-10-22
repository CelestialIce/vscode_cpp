#include <iostream>

using namespace std;

int main()
{
    int sum=0, n, t;
    while(cin>>n){
        int *a=new int [n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            a[i]=a[i]/2+1;
        }


        for(int i=0;i<n-1;i++){
            for(int j=i;j<n-i-1;j++){
                if(a[j]>a[j+1]){
                    t=a[j]; a[j]=a[j+1]; a[j+1]=t;
                }
            }
        }
        n=n/2+1;
        for(int i=0;i<n;i++)
            sum+=a[i];
        cout<<sum<<endl;
        sum=0;
        delete [] a;
}


    return 0;
}

/*
9
43 24 53 64 53 24 53 53 25





 */
