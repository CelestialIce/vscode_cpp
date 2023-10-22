#include <iostream>

using namespace std;
struct CandyBar{
    char* ps=new char [40];
    double weight;
    int cal;
};

int main()
{
    CandyBar snack{"Mocha Munch",2.3,350};
    cout << snack.ps <<" , "<<snack.weight <<" ,"<<snack.cal<<endl;

    return 0;
}
