#include <iostream>
#include <algorithm>

void quick_sort(int q[],int l,int r)
{
    if(l>=r) return;
    int i=l-1,j=r+1,x=q[(r+l)>>1];//括号别忘了
    while(i<j){
        do i++;while (q[i]<x);
        do j--;while (q[j]>x);
        if(i<j) std::swap(q[i],q[j]);
    }
    quick_sort(q,l,i-1);//居然是这里
    quick_sort(q,j+1,r);
}

int main()
{
    int n,k;
    std::cin>>n>>k;
    int *q=new int[n];
    for(int i=0;i<n;i++){
        scanf("%d",&q[i]);
    }
    quick_sort(q,0,n-1);

    printf("%d",q[k-1]);
}
