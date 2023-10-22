#include <algorithm>
#include <cmath>
#include  <iostream>
using namespace std;

typedef long long LL;

int *temp=nullptr;

LL mergeSort(int a[], int l, int r)
{
    if(l>=r) return 0;
    int mid=(l+r)>>1;
    LL result=mergeSort(a,l,mid)+mergeSort(a,mid+1,r);
    int k=0,p=l,q=mid+1;
    while(p<=mid&&q<=r){
        if(a[p]<=a[q])
            temp[k++]=a[p++];
        else{
            result+=mid-p+1;
            temp[k++]=a[q++];
        }
        }//缩进问题
        while(p<=mid) temp[k++]=a[p++];
        while(q <= r) temp[k++]=a[q++];
        for(int i=l,k=0;i<=r;i++,k++) a[i]=temp[k];
    return result;
}

int main()
{
    int n;
    cin>>n;
    int *a=new int[n];
    temp=new int[n];
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    cout<<mergeSort(a,0,n-1)<<endl;

    delete []a;
    delete []temp;
    return 0;
}