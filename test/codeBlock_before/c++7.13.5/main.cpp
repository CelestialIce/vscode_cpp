#include <iostream>

using namespace std;

long long int jc(long long n,long long* result){
    int times=0;
    if(n>0){
        *result*=n;
        times++;
        jc(n-1,result);
    }

    if(times==0)
        return 1;
    else
        return *result;
}

int main()
{
    long long n;
    cout<<"Please enter a number ";
    while(cin>>n){
        long long i=1;
        cout << jc(n,&i) <<endl ;
        cout<<"Please enter another number ";
    }

    return 0;
}
