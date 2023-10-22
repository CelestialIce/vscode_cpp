#include <iostream>
#include<array>
using namespace std;

int main()
{
    array<double,10> a;
    int i=0,num=0;
    double t,ave;
    while(cin>>t){
        a[i++]=t;
    }
    for(int j=0;j<i+1;j++){
        ave+=a[j];
    }
    ave/=i;
    for(int j=0;j<i+1;j++){
        if(a[j]>ave)
            num++;
    }
    cout<<"average is "<<ave<<" and the bigger have "<<num;

    return 0;
}
