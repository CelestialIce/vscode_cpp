#include <iostream>

using namespace std;

int main()
{
    double Daphne=100,Cleo=100;
    int year=0;
    while(1){
        Daphne+=10;
        Cleo*=1.05;
        year++;
        if(Daphne<Cleo)
            break;
    }
    cout<<year<<endl;
    cout<<"Daphne "<<Daphne<<"Cleo "<<Cleo;
    return 0;
}
