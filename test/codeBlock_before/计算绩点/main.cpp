#include <iostream>
#include <iomanip>
using namespace std;

double GPA(int n)
{
    if(n>=90)
        return 4.0;
    if(n>=85)
        return 3.7;
    if(n>=81)
        return 3.3;
    if(n>=78)
        return 3.0;
    if(n>=75)
        return 2.7;
    if(n>=72)
        return 2.3;
    if(n>=68)
        return 2.0;
    if(n>=64)
        return 1.7;
    if(n>=60)
        return 1.0;
    if(n<60&&n>=0)
        return 0;

}

int main()
{
    int n;
    cin >> n;
    double score,fen,sum=0,tempsum=0;
    while(n--){
        cin>>score>>fen;
        sum+=fen;
        tempsum+=fen*GPA(score);
    }
    cout<<setiosflags(ios::fixed)<<setprecision(4);
    cout<<tempsum/sum;


    return 0;
}
