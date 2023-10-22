#include <iostream>

using namespace std;

int main()
{
    long long worldp,USp;
    cout<<"enter the world's population ";
    cin>>worldp;
    cout<<"enter the US's population ";
    cin>>USp;
    cout << "The population of the US is " <<double(USp)/double(worldp)*100<< "% of the world population.";
    return 0;
}
