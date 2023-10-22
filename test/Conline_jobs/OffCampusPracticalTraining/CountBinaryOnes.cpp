#include<iostream>
using namespace std;
int lowbit(int n){
    return n & -n;
}
int numberOfOne(int n){
    int res=0;
    while(n){
        n-=lowbit(n);
        res++;
    }
    return res;
}
int main()
{
    int n;
    cin>>n;
    cout<<numberOfOne(n);
    return 0;
}