#include <iostream>

using namespace std;

bool is_leap_year(int year){
    if(year%4==0&&year%100!=0||year%400==0)
        return 1;
    else
        return 0;
}

int main()
{
    int days[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    char ch;
    int year,month,day,sum;
    while(cin>>year>>ch>>month>>ch>>day){
        for(int i=0;i<month-1;i++){
            sum+=days[i];
        }
        sum+=day;
        if(is_leap_year(year)&&month>2)
            sum++;
        cout<<sum<<endl;
        sum=0;
    }

    return 0;
}
