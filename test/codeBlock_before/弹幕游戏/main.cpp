#include <iostream>
#include <cmath>
using namespace std;

double count_the_distanse(double x, double y)
{
    return sqrt(x*x+y*y);
}
int main()
{
    int flag=0,n=0,p=0;
    double t[100][3]={0};
    cin >> n;
    for(int i=0;i<n;i++){
            for(int j=0;j<3;j++){
                cin>>t[i][j];
        }
    }
    cin>>p;
    double tempx=t[p][0];
    double tempy=t[p][1];
    double tempr=t[p][2];
    for(int i=0;i<n;i++){
        double a=t[i][2]+tempr;
        double b=count_the_distanse(t[i][1]-tempy,t[i][0]-tempx);
        if(i==p)
            continue;
        if(a>b)
            flag++;
    }
    if(flag==0)
        cout << "Alive";
    if(flag!=0)
        cout << "Biu";

    return 0;
}
