#include <iostream>

using namespace std;
struct PS{
    char* ps=new char[40];
    double dia;
    double wei;
};

int main()
{
   // PS willa{"what a wonderful",100,100};
   PS willa;
   cin.getline(willa.ps,40);
   cin>>willa.dia;
   cin>>willa.wei;
    cout<<willa.ps<<" "<<willa.dia<<" "<<willa.wei<<endl;
    delete willa.ps;

    return 0;
}
